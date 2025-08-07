#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string sAns;
	int ans = 200;
	while (true)
	{
		string str;
		int temper;
		cin >> str >> temper;

		if (temper < ans)
		{
			sAns = str;
			ans= temper;
		}

		if (str == "Waterloo")
			break;
	}
	cout << sAns;
}