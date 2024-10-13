#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double n;
		string str;
		cin >> n >> str;
		cout << fixed;
		cout.precision(4);

		if (str == "kg")
		{
			cout << n * 2.2046 << " lb\n";
		}
		else if (str == "g")
		{
			cout << n * 3.7854 << " l\n";
		}
		else if (str == "lb")
		{
			cout << n * 0.4536 << " kg\n";
		}
		else if (str == "l")
		{
			cout << n * 0.2642 << " g\n";
		}
	}
}