#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;

	long long ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp,expo,base,val = 1;
		cin >> tmp;
		base = tmp / 10;
		expo = tmp % 10;
		for (int i = 0; i < expo; ++i)
		{
			val *= base;
		}
		ans += val;
	}
	cout << ans;
}