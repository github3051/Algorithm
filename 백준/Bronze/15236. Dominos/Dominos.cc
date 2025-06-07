#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	// 2 -> 1+2 , 2+3+4
	// 3 -> 1+2+3 , 2+3+4+5+6 , 3+4+5+6+7+8+9 
	// 4 -> 4개, 7개, ?개
	int ans = 0;
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			ans += i+j;
		}
	}
	cout << ans;
}