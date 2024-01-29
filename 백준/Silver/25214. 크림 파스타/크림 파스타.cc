#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	int dp;
	int minElem = 1'000'000'000;
	int maxForSub = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> dp;
		if (dp < minElem)
		{
			minElem = dp;
		}

		if (maxForSub < dp - minElem)
		{
			maxForSub = dp - minElem;
		}
		

		cout << maxForSub << ' ';
	}
}