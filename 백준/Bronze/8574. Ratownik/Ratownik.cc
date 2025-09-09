#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, k, x, y;
	cin >> n >> k >> x >> y;
	int nOutSight = 0;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		nOutSight += (k*k < (x-a)*(x-a) + (y-b)*(y-b) ? 1 : 0);
	}
	cout << nOutSight;
}