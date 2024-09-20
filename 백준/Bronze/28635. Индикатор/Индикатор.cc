#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, a, b;
	cin >> m >> a >> b;

	cout << (a > b ? (m - a) + b : b - a);
}