#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string str1, str2;
	cin >> str1 >> str2;
	
	int s1Len = str1.length();
	int s2Len = str2.length();

	for (int i = 0; i < s1Len; ++i)
	{
		if (str1[i] < '0' || str1[i] > '9')
		{
			cout << "NaN";
			return 0;
		}
	}

	for (int i = 0; i < s2Len; ++i)
	{
		if (str2[i] < '0' || str2[i] > '9')
		{
			cout << "NaN";
			return 0;
		}
	}

	cout << stoi(str1) - stoi(str2);
}