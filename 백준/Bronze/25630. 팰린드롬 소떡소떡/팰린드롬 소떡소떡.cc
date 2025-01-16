#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int len, ans = 0;
	string str;
	cin >> len >> str;
	for (int i = 0; i < len/2; ++i)
	{
		if (str[i] != str[len - i - 1])
		{
			ans += 1;
		}
	}
	cout << ans;
}