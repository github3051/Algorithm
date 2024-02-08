#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	int idx = 1;
	while (true)
	{
		int n;
		cin >> n;

		if (n == 0)
		{
			break;
		}

		vector<double> vec(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> vec[i];
		}

		cout << fixed << setprecision(1) << "Case " << idx << ": " << (n % 2 == 1 ? vec[n / 2] : (vec[n / 2 - 1] + vec[n / 2]) / 2) << '\n';
		idx += 1;
	}
}