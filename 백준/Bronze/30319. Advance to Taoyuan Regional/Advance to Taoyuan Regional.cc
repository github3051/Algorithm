#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int y, m, d;
	y = stoi(str.substr(0, 4));
	m = stoi(str.substr(5, 2));
	d = stoi(str.substr(8, 2));

	if (m <= 8 || (m == 9 && d <= 16))
	{
		cout << "GOOD";
	}
	else
	{
		cout << "TOO LATE";
	}
}