#include <iostream>
#include <string>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;
	cin.ignore();

	while (testCases--)
	{
		int sum = 0;
		string str;
		getline(cin, str);

		int len = str.length();
		string number = "";
		for (int i = 0; i < len; ++i)
		{
			if (str[i] == ' ')
			{
				sum += stoi(number);
				number = "";
			}
			else
			{
				number += str[i];
			}
		}
		// str의 마지막 숫자도 계산하기
		sum += stoi(number);

		cout << sum << '\n';
	}
}