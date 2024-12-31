#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int k;
	string str;
	cin >> k >> str;

	int sLen = str.length();
	string ans(1, str[0]);
	int cnt = 0;
	for (int i = 1; i < sLen; ++i)
	{
		if (cnt == k - 1)
		{
			ans += str[i];
			cnt = 0;
		}
		else
		{
			cnt += 1;
		}
	}
	cout << ans;
}