
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int y, m, d, n;
	cin >> y >> m >> d >> n;
	d *= -1;
	m *= -1;


	y = y + ((d - 1 + n) / 30 + m-1) / 12;
	m = (m - 1 + (d - 1 + n) / 30) % 12 + 1;
	d = (d-1 + n) % 30 + 1;
	
	cout << y << '-' << (m >= 10 ? "" : "0") << m << '-' << (d >= 10 ? "" : "0") << d;
}