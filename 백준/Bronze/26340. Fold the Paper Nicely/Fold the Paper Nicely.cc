// 정사각형이 되는 경우(7 6 2 -> 3 3이 됨)에 대한 설명이 없음
// 다만 어차피 두 side가 같은 숫자가 되면 둘 중 누굴 접어도 같은 수가 나오므로 실질적으로 출력결과는 동일하긴 함
// 만약에 '어느 변을 접었는가?' 라는 질문이 나온다면 이 문제는 잘못됐음.
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int one, other, nFold;
		cin >> one >> other >> nFold;

		cout << "Data set: " << one << ' ' << other << ' ' << nFold << '\n';

		bool isChange = (one > other ? false : true);
		while (nFold--)
		{
			if (isChange == false)
			{
				one /= 2;
			}
			else
			{
				other /= 2;
			}

			isChange = (one > other ? false : true);
		}

		if (isChange)
		{
			cout << other << ' ' << one << "\n\n";
		}
		else
		{
			cout << one << ' ' << other << "\n\n";
		}
	}
}