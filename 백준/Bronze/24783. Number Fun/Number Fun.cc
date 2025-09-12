#include <iostream>
#include <string>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if ( (a / b == c && a%b == 0) || (b / a == c && b%a == 0) || a + b == c || a - b == c || b - a == c || a * b == c)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
}