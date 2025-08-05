#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int sum = 0;
		for (int i = 1; i <= n/2; ++i)
		{
			if (n % i == 0)
			{
				sum += i;
			}
		}

		cout << n;
		if (sum == n)
		{
			cout << " is a perfect number.";
		}
		else if (sum < n)
		{
			cout << " is a deficient number.";
		}
		else if (sum > n)
		{
			cout << " is an abundant number.";
		}
		cout << "\n\n";
	}
}