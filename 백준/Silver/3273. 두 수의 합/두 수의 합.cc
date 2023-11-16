#include <iostream>
#include <vector>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<bool> arr(2'000'000, false);
	int n;
	cin >> n;
	vector<int> arr2;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		arr[tmp] = true;
		arr2.push_back(tmp);
	}
	int x;
	cin >> x;

	int ans = 0;
	for (int i = 0; i < n; i++)
		if (x - arr2[i] > 0)
			if (arr[x - arr2[i]] == true)
				ans++;

	cout << ans / 2;

	return 0;
}