#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string str;

	cin >> n >> str;

	int ansCnt = 0;
	for (int i = 0; i < n; ++i)
	{
		// 맨 앞자리가 0이라면 Cnt +1을 하고 i+1해서 다음으로 넘어감
		if (str[i] == '0')
		{
			ansCnt += 1;
			continue;
		}

		// 현재 위치에서 자릿수가 3개 이상 남아있다면
		if (i + 3 <= n)
		{
			// 자릿수 3개의 값이 641 이하면 i를 ++3, 641 초과면 i를 ++2
			int tmp = stoi(str.substr(i, 3));
			if (tmp <= 641)
			{
				i += 2;
			}
			else
			{
				i += 1;
			}
			ansCnt += 1;
		}
		// 자릿수가 2개 이하라면
		else
		{
			ansCnt += 1;
			break;
		}
	}

	cout << ansCnt;
}