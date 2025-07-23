#include <iostream>
using namespace std;

int main() 
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;

		int sum = 0;
		for (int i = 1; i < n; ++i)
		{
			if (n % i == 0)
			{
				sum += i;
			}
		}
		cout << n << (sum == n ? " PERFECT" : (sum > n ? " ABUNDANT" : " DEFICIENT"));
		cout << '\n';
	}
}