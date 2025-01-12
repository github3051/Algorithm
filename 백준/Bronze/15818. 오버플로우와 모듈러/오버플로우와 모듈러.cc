#include <iostream>
using namespace std;

int main()
{
	long long n, m;
	long long ans = 1;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		long long tmp;
		cin >> tmp;
		ans = (ans * tmp) % m;
	}
	cout << ans;
}