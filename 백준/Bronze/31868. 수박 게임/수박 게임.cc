#include <iostream>
#include <climits>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	while (--n)
	{
		k /= 2;
	}
	cout << k;
}