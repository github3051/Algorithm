#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, p1;
	cin >> n >> p1;
	vector<int> vec(n);
	for (int i = 0; i < n - 1; ++i)
		cin >> vec[i];

	int ans = 0;
	while (true)
	{
		int most = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			if (vec[i] > vec[most])
				most = i;
		}

		if (p1 > vec[most]) {
			cout << ans;
			break;
		}
		else {
			vec[most] -= 1;
			p1 += 1;
			ans += 1;
		}
	}
}