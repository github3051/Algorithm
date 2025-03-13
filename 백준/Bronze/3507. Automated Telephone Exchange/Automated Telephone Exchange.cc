#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int startIdx = n - 99;
	int ans = 0;
	
	if(startIdx < 100)
	{
		for (int i = startIdx; i <= 99; ++i)
		{
			if (n - i < 100)
			{
				ans += 1;
			}
		}
	}
	cout << ans;
}