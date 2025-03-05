#include <iostream>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	cout << (n-m*k < 0 ? 0 : n-m*k) << ' ' << ((n-m*k) + (m-1) < 0 ? 0 : (n - m * k) + (m - 1));
}