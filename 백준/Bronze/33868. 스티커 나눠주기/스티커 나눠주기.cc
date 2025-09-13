#include <iostream>
#include <string>
using namespace std;


int main()
{
	int t;
	cin >> t;
	int ansT = 0, ansB = 5000;

	while (t--)
	{
		int t, b;
		cin >> t >> b;
		ansT = (ansT < t ? t : ansT);
		ansB = (ansB > b ? b : ansB);
	}
	int ans = (ansT * ansB)%7;
	cout << ans + 1;
}