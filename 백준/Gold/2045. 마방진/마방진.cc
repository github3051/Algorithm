#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<vector<int>> vec(3, vector<int>(3, 0));
	int t = 0;
	//vector<pair<int, int>> zero(3, { -1,-1 }); 처음에는 좌표값으로 구할까했는데, 훨씬 로직이 복잡해지는거같아서 제외
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> vec[i][j];
			t += vec[i][j];
		}
	}

	int sum = 0;
	// 대각선 전부 0인 경우에만 sum을 한번에 찾을 수 없음. 그 외에는 sum을 반드시 찾을 수 있다.
	if (vec[0][0] + vec[1][1] + vec[2][2] == 0 || vec[0][2] + vec[1][1] + vec[2][0] == 0)
	{
		// 이 경우에는 sum을 구하는게 훨씬 쉽다. 대각선이 연속적으로 0이므로, 대각선의 합을 x라고 놓는다면, 마방진 전체의 합은 3x이다. 즉, 3x-x = 대각선을 제외한 나머지 숫자의 합이 된다.
		sum = t / 2;
	}
	// 0이 포함되지 않은 줄의 합이 가장 큰 값이 됨
	else
	{
		sum = max(vec[0][0] + vec[2][2], vec[0][2] + vec[2][0]) + vec[1][1]; // 대각선값을 미리 초기화
		for (int i = 0; i < 3; ++i)
		{
			int rows = 0, columns = 0;
			for (int j = 0; j < 3; ++j)
			{
				rows += vec[i][j];
				columns += vec[j][i];
			}
			sum = max({ sum,rows,columns });
		}
	}

	//위에서 sum을 구했으므로 이걸 통해서 값을 채운다.
	// i,j의 값이 비어있다면 어떻게 구할까? 만약 0,1이라면 0,0/0,2 와 1,1 /2,1을 통해 구할 수 있다. 이런 로직을 어떻게 구현할것인가?

	for (int i = 0; i < 3; ++i)
	{
		int zeroCnt = 0;
		int tmpSum = 0;
		int y, x;
		//가로
		for (int j = 0; j < 3; ++j)
		{
			if (vec[i][j] == 0)
			{
				zeroCnt += 1;
				y = i;
				x = j;
			}
			else
			{
				tmpSum += vec[i][j];
			}
		}

		if (zeroCnt == 1)
		{
			vec[y][x] = sum - tmpSum;
		}

		zeroCnt = 0;
        tmpSum = 0;
		// 세로
		for (int j = 0; j < 3; ++j)
		{
			if (vec[j][i] == 0)
			{
				zeroCnt += 1;
				y = j;
				x = i;
			}
			else
			{
				tmpSum += vec[j][i];
			}
		}

		if (zeroCnt == 1)
		{
			vec[y][x] = sum - tmpSum;
		}
	}

	// 대각선
	int lDiagonal = 0, rDiagonal = 0;
	for (int i = 0; i < 3; ++i)
	{
		lDiagonal += vec[i][i];
		rDiagonal += vec[i][2 - i];
	}

	for (int i = 0; i < 3; ++i)
	{
		if (vec[i][i] == 0)
		{
			vec[i][i] = sum - lDiagonal;
		}

		if (vec[i][2 - i] == 0)
		{
			vec[i][2 - i] = sum - rDiagonal;
		}
	}


	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << vec[i][j] << ' ';
		}
		cout << '\n';
	}
}