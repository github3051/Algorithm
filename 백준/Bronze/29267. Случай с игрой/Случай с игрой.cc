#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int ans = 0;
	int save = 0;
	bool isSave = false;
	while (n--)
	{
		string str;
		cin >> str;
		if (str == "save")
		{
			isSave = true;
			save = ans;
		}
		else if (str == "load")
		{
			if (!isSave)
			{
				ans = 0;
			}
			else
			{
				ans = save;
			}
		}
		else if (str == "shoot")
		{
			ans -= 1;
		}
		else if (str == "ammo")
		{
			ans += k;
		}

		cout << ans << '\n';
	}
}