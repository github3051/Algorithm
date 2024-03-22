#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}

	vector<int> oddeven;
	int tmp = (vec[0] % 2 == 0 ? 1 : -1);
	for (int i = 1; i < n; ++i)
	{
		if ((vec[i - 1]%2 == 0 && vec[i]%2 == 1) || (vec[i - 1] % 2 == 1 && vec[i] % 2 == 0))
		{
			oddeven.emplace_back(tmp);
			tmp = 0;
		}

		if (vec[i] % 2 == 1)
		{
			tmp -= 1;
		}
		else
		{
			tmp += 1;
		}
	}
	oddeven.emplace_back(tmp); // 끝 값 처리


	int oddevenSize = oddeven.size();
	int ans = 0;
	for (int i = 0; i < oddevenSize; ++i)
	{
		int cnt = 0;
		int tmpMax = 0;
		for (int j = i; j < oddevenSize; ++j)
		{
			if (cnt > k)
			{
				break;
			}

			if(oddeven[j] > 0)
			{
				tmpMax += oddeven[j];
			}
			else
			{
				cnt += oddeven[j] * -1;
			}
		}
		
		ans = max(tmpMax, ans);
	}

	cout << ans;
}