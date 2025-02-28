#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;


		//Date
		if (0 <= x && x <= 23 && 0 <= y && y <= 59)
		{
			cout << "Yes ";
		}
		else
		{
			cout << "No ";
		}

		//month
		if ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) && (1 <= y && y <= 31))
		{
			cout << "Yes\n";
		}
		else if ((x == 4 || x == 6 || x == 9 || x == 11) && (1 <= y && y <= 30))
		{
			cout << "Yes\n";
		}
		else if (x == 2 && (1 <= y && y <= 29))
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}

	}
}