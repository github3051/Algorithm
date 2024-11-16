#include <iostream>
#include <string>
using namespace std;

int main()
{
	int l, r, a;
	cin >> l >> r >> a;

	int big, small;
	if (l >= r)
	{
		big = l;
		small = r;
	}
	else
	{
		big = r;
		small = l;
	}

	if (big - small > a)
	{
		cout << (small + a) * 2;
	}
	else
	{
		a = a - (big - small);
		cout << big * 2 + (a%2 == 0 ? a : a-1);
	}
}