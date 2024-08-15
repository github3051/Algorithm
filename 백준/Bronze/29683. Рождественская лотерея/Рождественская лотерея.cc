#include <iostream>
using namespace std;

int main()
{
	int n, criteria;
	cin >> n >> criteria;

	int ans = 0;
	while (n--)
	{
		int price;
		cin >> price;

		ans += price / criteria;
	}
	cout << ans;
}