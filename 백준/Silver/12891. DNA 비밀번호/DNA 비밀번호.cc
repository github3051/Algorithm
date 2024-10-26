#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int converse(char& c)
{
	if (c == 'A')
		return 0;
	else if (c == 'C')
		return 1;
	else if (c == 'G')
		return 2;
	else if (c == 'T')
		return 3;
}

int main()
{
	int s, p;
	cin >> s >> p;
	string str;
	cin >> str;
	vector<int> acgt(4);
	for (int i = 0; i < 4; ++i)
	{
		cin >> acgt[i];
	}

	vector<int> currAcgt(4, 0);

	for (int i = 0; i < p; ++i)
	{
		currAcgt[converse(str[i])] += 1;
	}

	int start = 0, end = p-1;
	int ans = 0;
	while (end < s)
	{
		// 비밀번호가 조건을 만족하면 cnt 1 증가
		if (currAcgt[0] >= acgt[0] && currAcgt[1] >= acgt[1] && currAcgt[2] >= acgt[2] && currAcgt[3] >= acgt[3])
		{
			ans += 1;
		}

		// 시작지점을 오른쪽으로 한칸옮기고 curracgt값을 뺌
		currAcgt[converse(str[start])] -= 1;
		start += 1;

		// 끝 지점을 오른쪽으로 한칸 옮기고 curracgt값을 더함
		end += 1;
		currAcgt[converse(str[end])] += 1;
	}

	cout << ans;
}