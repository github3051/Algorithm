#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (true)
	{
		string str;
		getline(cin, str);
		if (str == "***")
		{
			break;
		}
		reverse(str.begin(), str.end());
		cout << str << '\n';
    }
}