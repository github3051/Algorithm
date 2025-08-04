#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int sLen = str.length();

	string cStr = "";
	for (int i = 0; i < sLen; ++i)
	{
		if (str[i] == '(')
		{
			cout << '\n';
		}
		else if (str[i] == ')')
		{
			cout << cStr;
			cStr = "";
		}
		else if (str[i] == ' ')
		{
			cout << cStr << ' ';
			cStr = "";
		}
		else
		{
			cStr += str[i];
		}
	}
	cout << cStr << (!cStr.empty() ? "\n-" : "");
}