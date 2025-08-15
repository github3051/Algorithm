#include <iostream>
using namespace std;

int main()
{
	int sLen, start, end;
	string str;
	cin >> sLen >> start >> end >> str;

	for (int i = 0; i < start-1; ++i)
	{
		cout << str[i];
	}

	for (int i = end-1; i >= start-1 ; --i)
	{
		cout << str[i];
	}

	for (int i = end; i < sLen; ++i)
	{
		cout << str[i];
	}
}
