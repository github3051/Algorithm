#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	while (true)
	{
		string str;
		cin >> str;
		if (str == "0")
		{
			break;
		}

		int len = str.length();
		while (len != 1)
		{
			int tmp = 0;
			for (int i = 0; i < len; ++i)
			{
				tmp += (str[i] - '0');
			}
			str = to_string(tmp);
			len = str.length();
		}
		cout << str << '\n';
	}
}