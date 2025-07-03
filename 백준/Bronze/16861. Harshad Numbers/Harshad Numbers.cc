#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = n; i <= 1'000'000'000; ++i)
	{

		int sum = 0, num = i;
		while (num > 0)
		{
			sum += num % 10;
			num /= 10;
		}

		if (sum == 0 || i % sum == 0)
		{
			cout << i;
			return 0;
		}
	}
}