#include <iostream>
#include <string>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;

		int len = str.length();

		size_t pos = 0;
		while ((pos = str.find("PO", pos)) != string::npos)
		{
			str.replace(pos, 2, "PHO");
			pos += 3;
		}
		cout << str << '\n';
	}
}