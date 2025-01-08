#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	int axby = abs(a - x) + abs(b - y);
	int aybx = abs(a - y) + abs(b - x);
	int ans = (axby > aybx ? aybx : axby);
	cout << (ans > abs(a - b) ? abs(a - b) : ans);
}