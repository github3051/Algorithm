#include <iostream>
using namespace std;

int main()
{
	int len;
	string str;
	cin >> len >> str;
	for (int i = 1; i < len; ++i)
	{
		if (str[i] == 'J')
		{
			cout << str[i - 1] << '\n';
		}
	}
}