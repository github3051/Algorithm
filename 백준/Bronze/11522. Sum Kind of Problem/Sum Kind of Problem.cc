#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int idx, n, ans = 0;
		vector<int> s(3, 0);
		cin >> idx >> n;
		cout << idx << ' ';

		for (int i = 1; i <= n; ++i)
		{
			s[0] += i;
			s[1] += 2 * i - 1;
			s[2] += 2 * i;
		}

		for (const auto& elem : s)
		{
			cout << elem << ' ';
		}
		cout << '\n';
	}
}