#include <iostream>
#include <climits>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int s1 = 0, s2 = 0, s3 = 0;
		for (int i = 1; i <= n; ++i)
		{
			s1 += i;
			s2 += (2 * i - 1);
			s3 += (2 * i);
		}
		cout << s1 << ' ' << s2 << ' ' << s3 << '\n';

	}
}