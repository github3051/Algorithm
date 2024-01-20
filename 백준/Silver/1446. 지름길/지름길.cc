#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct shortcut
{
	int start;
	int end;
	int dist;
};

bool Compare(const shortcut& a, const shortcut& b)
{
	if (a.start == b.start)
	{
		return a.end < b.end;
	}
	return a.start < b.start;
}

int main()
{
	int n, finDest;
	cin >> n >> finDest;

	vector<shortcut> sList(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> sList[i].start >> sList[i].end >> sList[i].dist;
	}

	sort(sList.begin(), sList.end(), Compare);


	int curr = 0;
	int idx = 0;
	vector<int> ans(finDest + 1, 10'000);
	ans[curr] = 0; // 시작점 0
	while (true)
	{
		if (curr >= finDest)
		{
			break;
		}

		if (idx < n && curr == sList[idx].start) // 현 지점에 지름길이 있을 때, (조건식 순서 주의)
		{
			if (sList[idx].end > finDest || sList[idx].dist + curr >= finDest)
			{
				idx += 1;
				continue;
			}
			ans[sList[idx].end] = min(ans[sList[idx].end], ans[curr] + sList[idx].dist); // 지름길의 끝 지점의 최솟값 계산
			idx += 1;
		}
		else // 현재 지점에 지름길이 없을 때,
		{
			ans[curr + 1] = min(ans[curr + 1], ans[curr] + 1);
			curr += 1;
		}
	}

	cout << ans[finDest];
}