#include <iostream>
using namespace std;

int ConvertDate(const int& year, const int& month)
{
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;

	case 4: case 6: case 9: case 11:
		return 30;

	case 2:
		if ( (year % 4 == 0 && year % 100) || year % 400 == 0 )
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int year, month;
		cin >> year >> month;
		
		if (month == 1)
		{
			cout << year - 1 << ' ' << 12 << ' ' << ConvertDate(year-1,12);
		}
		else
		{
			cout << year << ' ' << month-1 << ' ' << ConvertDate(year, month-1);
		}

		cout << '\n';
	}
}