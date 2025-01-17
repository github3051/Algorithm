#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == 1 || a == 3) && (b == 8 || b == 6) && (c == 2 || c == 5))
	{
		cout << "JAH";
	}
	else
	{
		cout << "EI";
	}
}