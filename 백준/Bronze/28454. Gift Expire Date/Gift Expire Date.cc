#include <iostream>
#include <string>
using namespace std;

int main()
{
	string currDate;
	cin >> currDate;

	int y = stoi(currDate.substr(0, 4));
	int m = stoi(currDate.substr(5, 2));
	int d = stoi(currDate.substr(8, 2));

	int n, ans = 0;
	cin >> n;


	while (n--)
	{
		string expirationDate;
		cin >> expirationDate;

		int exY = stoi(expirationDate.substr(0, 4));
		int exM = stoi(expirationDate.substr(5, 2));
		int exD = stoi(expirationDate.substr(8, 2));

		if (y > exY)
		{
			continue;
		}
		else if(y < exY)
		{
			ans += 1;
		}
		else if (y == exY)
		{
			if (m > exM)
			{
				continue;
			}
			else if (m < exM)
			{
				ans += 1;
			}
			else if (m == exM)
			{
				if (d > exD)
				{
					continue;
				}
				else
				{
					ans+= 1;
				}
			}
		}
	}

	cout << ans;
}