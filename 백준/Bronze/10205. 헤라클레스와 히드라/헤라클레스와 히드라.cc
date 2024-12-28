#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		int nHead;
		string str;
		cin >> nHead >> str;
		int len = str.length();
		for (int j = 0; j < len; ++j)
		{
			if (str[j] == 'c')
			{
				nHead += 1;
			}
			else if (str[j] == 'b')
			{
				nHead -= 1;
			}
		}

		cout << "Data Set " << i << ":\n" << nHead << "\n\n";
	}
}