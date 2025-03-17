#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> material(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> material[i];
	}
	sort(material.begin(), material.end());

	int ans = 0;
	vector<bool> useMaterial(n, false);
	for (int i = 0; i < n-1; ++i)
	{
		if (useMaterial[i] == true)
		{
			continue;
		}
		for (int j = i+1; j < n; ++j)
		{
			if (useMaterial[j] == true)
			{
				continue;
			}

			int sum = material[i] + material[j];

			if (sum == m)
			{
				ans += 1;
				useMaterial[i] = true;
				useMaterial[j] = true;
				break;
			}
		}
	}
	cout << ans;
}