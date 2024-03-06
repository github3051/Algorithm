#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<bool> pageNum(n + 1, false);
	for (int i = 0; i < m; ++i)
	{
		int tmp;
		cin >> tmp;
		pageNum[tmp] = true;
	}

	vector<int> lostpage;
	for (int i = 1; i <= n; ++i)
	{
		if (pageNum[i] == false)
		{
			lostpage.emplace_back(i);
		}
	}

	int lpSize = lostpage.size();
	int ans = (lpSize != 0 ? 5 + 2 : 0); // 잃어버린 페이지가 있다면 7로 시작

	for (int i = 1; i < lpSize; ++i)
	{
		ans += min(5 + 2, (lostpage[i] - lostpage[i-1]) * 2); // 단독으로 인쇄 vs 잃어버린 i-1 페이지부터 i까지 연속 인쇄
	}

	cout << ans;
}