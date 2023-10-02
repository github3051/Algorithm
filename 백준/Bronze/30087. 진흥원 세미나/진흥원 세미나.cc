#include <iostream>
using namespace std;

void PrintPosition(const string& str)
{
	switch (str[0])
	{
	case 'A':
		if (str[1] == 'l')
		{
			cout << "204\n";
		}
		else if (str[1] == 'r')
		{
			cout << "302\n";
		}
		break;

	case 'C':
		cout << "B101\n";
		break;

	case 'D':
		cout << "207\n";
		break;

	case 'N':
		cout << "303\n";
		break;

	case 'S':
		cout << "501\n";
		break;

	case 'T':
		cout << "105\n";
		break;
	}
}

int main()
{
	int n;
	cin >> n;

	string str;
	while (n--)
	{
		cin >> str;
		PrintPosition(str);
	}
}
