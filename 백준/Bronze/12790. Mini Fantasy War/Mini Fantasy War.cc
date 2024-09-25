#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int hp, mp, ap,dp,chHP,chMP,chAP,chDP;
		cin >> hp >> mp >> ap >> dp >> chHP >> chMP >> chAP >> chDP;

		int cp = (hp + chHP >= 1 ? hp + chHP : 1) + 5 * (mp + chMP >= 1 ? mp + chMP : 1) + 2 * (ap + chAP >= 1 ? ap + chAP : 0) + 2 * (dp + chDP);
		cout << cp << '\n';
	}
}