#include <iostream>
using namespace std;

int main()
{
	int n;
	string str;
	cin >> n >> str;

	for (int i = 0; i < n; ++i)
	{
		if (str[i] == 'J')
		{
			cout << 'O';
		}
		else if (str[i] == 'O')
		{
			cout << 'I';
		}
		else if (str[i] == 'I')
		{
			cout << 'J';
		}
	}
}