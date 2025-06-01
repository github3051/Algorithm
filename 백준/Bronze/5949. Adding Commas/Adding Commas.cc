#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int sLen = str.length();
	for (int i = 1; i <= sLen; ++i)
	{
		cout << str[i-1];
		if ( (sLen%3 == i || (i - sLen%3)%3 == 0) && i != sLen )
		{
			cout << ',';
		}
	}
}