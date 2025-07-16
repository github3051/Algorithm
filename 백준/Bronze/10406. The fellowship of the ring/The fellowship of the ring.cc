#include <iostream>
#include <vector>
using namespace std;

int main() {
	int w, n, p;
	cin >> w >> n >> p;
	int ans = 0;
	while (p--)
	{
		int h;
		cin >> h;
		if (h >= w && h <= n)
		{
			ans += 1;
		}
	}
	cout << ans;
}