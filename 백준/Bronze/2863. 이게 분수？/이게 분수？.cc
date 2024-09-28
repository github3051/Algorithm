#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double zero = a / c + b / d;
	double one = c / d + a / b;
	double two = d/b + c/a;
	double three = b/a + d/c;
	if (max({ zero,one,two,three } ) == zero)
	{ 
		cout << 0;
	}
	else if (max({ zero,one,two,three }) == one)
	{
		cout << 1;
	}
	else if (max({ zero,one,two,three }) == two)
	{
		cout << 2;
	}
	else if (max({ zero,one,two,three }) == three)
	{
		cout << 3;
	}
}