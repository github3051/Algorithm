#include <iostream>
using namespace std;

int main()
{
	string str, uapc = "UAPC";
	cin >> str;
	str += " ";
	int sIdx = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (uapc[i] != str[sIdx])
		{
			cout << uapc[i];
		}
		else
		{
			sIdx += 1;
		}
	}
}