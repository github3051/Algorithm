#include <iostream>
using namespace std;

int main()
{
	int n, x, s;
	cin >> n >> x >> s;
	for (int i = 0; i < n; ++i)
	{
		int price, damage;
		cin >> price >> damage;
		if (price <= x && damage > s)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}