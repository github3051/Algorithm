#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	string str;
	cin >> str;
	int len = str.length();
	char c;
	while (cin >> c)
	{
		for (int i = 0; i < len; ++i)
		{
			if (str[i] == c)
			{
				str[i] += 32;
			}
		}
	}
	cout << str;
}
