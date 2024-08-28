#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int sLen = str.length();

	cout << str[0];
	for (int i = 1; i < sLen; ++i)
	{
		if (str[i] == str[i - 1])
		{
			continue;
		}
		else
		{
			cout << str[i];
		}
	}
}