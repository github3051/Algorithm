#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.first < b.first;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> condo(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> condo[i].first >> condo[i].second;
	}

	sort(condo.begin(), condo.end(), Compare);

	int reverseAns = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
			{
				continue;
			}

			// x(i)보다 바닷가에서 더 가까운데
			if (condo[i].first > condo[j].first)
			{
				// x(i)보다 숙박비가 더 싸거나 같은경우
				if (condo[i].second >= condo[j].second)
				{
					reverseAns += 1;
					break;
				}
			}

			// x(i)보다 숙박비가 더 싼데
			if (condo[i].second > condo[j].second)
			{
				// x(i)보다 바닷가에서 더 가깝거나 같은경우
				if (condo[i].first >= condo[j].first)
				{
					reverseAns += 1;
					break;
				}
			}
		}
	}

	cout << n - reverseAns;
}

// 정렬이 필요없음
// 조건이 양방향이 아니라 단반향임에 주의할 것
// 예를들어 "X보다 바닷가에 더 가까운 콘도들은 모두 X보다 숙박비가 더 비싸다" 이 조건의 반대 조건은 계산할 필요가 없는데 무의식적으로 해버렸음
// "x보다 바닷가에 더 먼 콘도들은 x보다 숙박비가 더 싸다" 이 조건을 무의식적으로 넣어버림. 조심할 것.

// 그리고 첫 번째 조건 다음은 '같은 경우'를 포함시켜야됨.