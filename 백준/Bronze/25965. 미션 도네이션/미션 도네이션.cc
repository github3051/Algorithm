#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

int main()
{
	int nGame;
	cin >> nGame;
	while (nGame--)
	{
		int nMission;
		cin >> nMission;
		vector<tuple<long long, long long, long long>> kda(nMission);
		long long ans = 0,k,d,a;
		for (int i = 0; i < nMission; ++i)
		{
			cin >> k >> d >> a;
			kda[i] = make_tuple(k, d, a);
		}
		cin >> k >> d >> a;
		for (const auto& elem : kda)
		{
			long long sumTmp = get<0>(elem)*k - get<1>(elem)*d + get<2>(elem)*a;
			ans += (sumTmp <= 0 ? 0 : sumTmp);
		}
		cout << ans << '\n';
	}
}