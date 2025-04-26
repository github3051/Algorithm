#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int aSum = 0, bSum = 0;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (a == b)
		{
			aSum += a;
			bSum += b;
		}
		else if (a > b)
		{
			aSum += a + b;
		}
		else
		{
			bSum += a + b;
		}
	}
	cout << aSum << ' ' << bSum;
}