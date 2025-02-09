#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		int a, b, c;
		char symbol, tmp;
		cin >> a >> symbol >> b >> tmp >> c;


		cout << "Case " << i << ": ";
		if (symbol == '+')
		{
			cout << (a + b == c ? "YES\n" : "NO\n");
		}
		else if (symbol == '-')
		{
			cout << (a - b == c ? "YES\n" : "NO\n");
		}
	}
}