#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int ans = n;
	int multi = 1;
	for (int i = 0; i < k; ++i)
	{
		multi *= 10;
		ans += n * multi;
	}
	cout << ans;
}