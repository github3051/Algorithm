#include <iostream>
#include <bitset>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int ans = 0;
		string binary1, binary2;
		cin >> binary1 >> binary2;

		int len = binary1.length();

		for (int i = 0; i < len; ++i)
		{
			if (binary1[i] != binary2[i])
			{
				ans += 1;
			}
		}

		cout << "Hamming distance is " << ans << ".\n";
	}
}