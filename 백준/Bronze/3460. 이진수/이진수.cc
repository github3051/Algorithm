#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int testCases,n;
	cin >> testCases;

	while (testCases--)
	{
		cin >> n;

		int idx = 0;
		while (n > 0)
		{
			if (n % 2 == 1)
			{
				cout << idx << ' ';
			}
			n /= 2;
			idx += 1;
		}
	}
}