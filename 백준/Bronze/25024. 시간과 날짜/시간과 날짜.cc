#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int t;
	cin >> t;

	int month[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	while (t--)
	{
		int x, y;
		cin >> x >> y;


		//Date
		if (x <= 23 && y <= 59)
		{
			cout << "Yes ";
		}
		else
		{
			cout << "No ";
		}

		//month
		if (1 <= x && x <= 12 && 1 <= y && y <= month[x])
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
}