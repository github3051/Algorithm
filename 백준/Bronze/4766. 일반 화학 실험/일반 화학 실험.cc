#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double prev;
	cin >> prev;

	double input;
	while (true)
	{
		cin >> input;
		if (input == 999)
		{
			break;
		}

		cout << fixed << setprecision(2) << input - prev << '\n';
		prev = input;
	}
}