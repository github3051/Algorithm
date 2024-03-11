#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string str;

	cin >> n >> str;

	int ansCnt = 0;
	for (int i = 0; i < n; ++i)
	{

		if ((i + 3 == n || (i + 3 < n && str[i + 3] != '0')) && stoi(str.substr(i, 3)) <= 641)
		{
			i += 2;
		}
		else if (i + 2 == n || (i + 2 < n && str[i + 2] != '0') && stoi(str.substr(i, 2)) <= 641)
		{
			i += 1;
		}
		ansCnt += 1;
	}

	cout << ansCnt;
}