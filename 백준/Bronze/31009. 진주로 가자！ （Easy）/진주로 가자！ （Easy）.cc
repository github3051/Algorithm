#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<string, int>> bus(n);
	int jinjuFare = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> bus[i].first >> bus[i].second;
		if (bus[i].first == "jinju")
		{
			jinjuFare = bus[i].second;
		}
	}

	int ans = 0;
	for (const auto& elem : bus)
	{
		if(elem.second > jinjuFare)
		{
			ans += 1;
		}
	}
	cout << jinjuFare << '\n' << ans;
}