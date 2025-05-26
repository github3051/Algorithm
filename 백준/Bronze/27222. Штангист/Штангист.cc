#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> trainingDay(n,0);
	for (int i = 0; i < n; ++i)
	{
		cin >> trainingDay[i];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		if (trainingDay[i])
		{
			ans += (b - a >= 0 ? b - a : 0);
		}
	}
	cout << ans;
}