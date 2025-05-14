#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;

	for (int i = n + 1; i <= 9999; ++i)
	{
		int front = i / 100;
		int back = i % 100;
		if (i == (front + back) * (front + back))
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
}