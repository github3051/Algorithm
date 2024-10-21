#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> vec(302);
	vec[0] = 0;
	for (int i = 1; i <= 301; ++i)
	{
		vec[i] = (vec[i - 1] + i);
	}

	vector<int> w(301, 0);
	for (int i = 1; i <= 300; ++i)
	{
		w[i] = w[i - 1] + i * vec[i + 1];
	}

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		cout << w[n] << '\n';
	}
}