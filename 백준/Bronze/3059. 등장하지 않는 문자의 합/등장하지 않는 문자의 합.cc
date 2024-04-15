#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	string str;
	bool alphabet[26];
	while (t--)
	{
		fill_n(alphabet, 26, false);
		cin >> str;
		int strLen = str.length();
		for (int i = 0; i < strLen; ++i)
		{
			alphabet[str[i] - 'A'] = true;
		}

		int sum = 0;
		for (int i = 0; i < 26; ++i)
		{
			if (alphabet[i] == false)
			{
				sum += (int)(i+'A');
			}
		}
		cout << sum << '\n';
	}
}