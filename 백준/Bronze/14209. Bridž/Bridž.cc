#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = 0;
	while (n--)
	{
		string str;
		cin >> str;

		int sLen = str.length();
		for (int i = 0; i < sLen; ++i)
		{
			if (str[i] == 'A')
				ans += 4;
			else if (str[i] == 'K')
				ans += 3;
			else if (str[i] == 'Q')
				ans += 2;
			else if (str[i] == 'J')
				ans += 1;
		}
	}
	cout << ans;
}