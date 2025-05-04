#include <iostream>
#include <climits>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;
	int sLen = str.length();
	string compare = "SciComLove";
	int ans = 0;
	for (int i = 0; i < sLen; ++i)
	{
		if (str[i] != compare[i])
		{
			ans += 1;
		}
	}
	cout << ans;
}
