#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> vecPool(3, 0);
	for (int i = 1; i <= n; ++i)
	{
		cin >> vecPool[0] >> vecPool[1] >> vecPool[2];
		sort(vecPool.begin(), vecPool.end());
		cout << "Case #" << i << ": ";
		cout << (vecPool[2] * vecPool[2] == vecPool[0] * vecPool[0] + vecPool[1] * vecPool[1] ? "YES\n" : "NO\n");
	}
}