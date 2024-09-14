#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double a, b;
		cin >> a >> b;
		double ans = a * 2 / b;

		cout << fixed << setprecision(2) << "The height of the triangle is " << ans << " units\n";
	}
}