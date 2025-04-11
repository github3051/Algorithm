#include <iostream>
using namespace std;

int main()
{
	int n, k;
	string str;
	cin >> n >> str >> k;

	if (str == "annyong")
	{
		if (k % 2 == 1)
		{
			cout << k;
		}
		else
		{
			cout << (k == n ? k - 1 : k + 1);
		}
	}
	else if (str == "induck")
	{
		if (k % 2 == 0)
		{
			cout << k;
		}
		else
		{
			cout << (k == n ? k - 1 : k + 1);
		}
	}
}