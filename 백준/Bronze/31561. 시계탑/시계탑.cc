#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n;
	cin >> n;

	cout << fixed << setprecision(1);
	if (n <= 30)
	{
		cout << n / 2;
	}
	else
	{
		cout << 15 + (n - 30) * 3 / 2;
	}
}