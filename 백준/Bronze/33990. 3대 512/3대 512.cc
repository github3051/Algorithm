#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = 1000;
	while (n--)
	{
		int a, b, c, sum = 0;
		cin >> a >> b >> c;
		sum = a + b + c;
		if (sum >= 512)
		{
			ans = (ans > sum ? sum : ans);
		}
	}
	cout << (ans == 1000 ? -1 : ans);
}