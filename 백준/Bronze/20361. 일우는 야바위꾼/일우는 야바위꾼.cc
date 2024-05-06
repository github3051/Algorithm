#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, x, k;
	cin >> n >> x >> k;
	vector<bool> vec(n + 1, false);
	vec[x] = true;


	for (int a, b, i = 0; i < k; ++i)
	{
		cin >> a >> b;
		bool tmp = vec[a];
		vec[a] = vec[b];
		vec[b] = tmp;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (vec[i] == true)
		{
			cout << i;
			return 0;
		}
	}
}