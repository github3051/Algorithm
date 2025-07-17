#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int sLen = str.length();
	for (int i = 0; i < sLen-1; ++i)
	{
		if (str[i] == 's' && str[i + 1] == 's')
		{
			cout << "hiss";
			return 0;
		}
	}
	cout << "no hiss";
}
