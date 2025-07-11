#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, ans = 0;
	cin >> t;

	while (t--)
	{
		string str;
		cin >> str;
		int sLen = str.length();
		bool cd = false;
		for (int i = 0; i < sLen; ++i)
		{
			if (i < sLen - 1 && (str[i] == 'C' && str[i + 1] == 'D'))
			{
				cd = true;
				break;
			}
		}
		ans += (cd == true ? 0 : 1);
	}
	cout << ans;
}