#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;

	while (n--)
	{
		int h, b, k;
		cin >> h >> b >> k;
		ans += (b - h > 0 ? b - h : 0) * k;
	}
	cout << ans;
}