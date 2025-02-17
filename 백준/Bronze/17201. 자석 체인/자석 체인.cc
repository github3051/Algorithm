#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n;
	char prev;
	cin >> n >> prev;
	for (int i = 0; i < n*2 - 1; ++i)
	{
		char c;
		cin >> c;
		if (prev == c)
		{
			cout << "No";
			return 0;
		}
		else
		{
			prev = c;
		}
	}
	cout << "Yes";
}