#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long x1, y1, r1, x2,y2,r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	long long dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	if ( (r1 + r2)*(r1 + r2) > dist)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}