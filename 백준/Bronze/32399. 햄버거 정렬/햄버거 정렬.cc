#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;

	if (str == "(1)")
	{
		cout << 0;
	}
	else if (str == ")1(" )
	{
		cout << 2;
	}
	else
	{
		cout << 1;
	}
}
