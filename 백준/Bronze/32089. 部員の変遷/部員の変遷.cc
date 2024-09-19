#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			break;
		}

		vector<int> vec(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> vec[i];
		}

		int sum = 0;
		for (int i = 0; i < n - 2; ++i)
		{
			sum = (sum < vec[i] + vec[i + 1] + vec[i + 2] ? vec[i] + vec[i + 1] + vec[i + 2] : sum);
		}

		cout << sum << '\n';
	}
}