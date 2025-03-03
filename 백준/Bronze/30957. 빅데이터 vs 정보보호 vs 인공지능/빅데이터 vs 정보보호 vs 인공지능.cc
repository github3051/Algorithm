
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string str;
	cin >> n >> str;
	int bigdata = 0, infosec = 0, ai = 0;
	for (int i = 0; i < n; ++i)
	{
		if (str[i] == 'B')
		{
			bigdata += 1;
		}
		else if (str[i] == 'S')
		{
			infosec += 1;
		}
		else if (str[i] == 'A')
		{
			ai += 1;
		}
	}
	int maxVal = max({bigdata,infosec,ai});

	if (bigdata == infosec && infosec == ai)
	{
		cout << "SCU";
	}
	else
	{
		if (bigdata == maxVal)
		{
			cout << 'B';
		}
		
		if (infosec == maxVal)
		{
			cout << 'S';
		}

		if (ai == maxVal)
		{
			cout << 'A';
		}
	}
}