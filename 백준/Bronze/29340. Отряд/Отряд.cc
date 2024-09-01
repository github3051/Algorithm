#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	int sLen = str1.length();

	string ans;
	for (size_t i = 0; i < sLen; ++i)
	{
		ans += (str1[i] >= str2[i] ? str1[i] : str2[i]);
	}
	cout << ans;
}