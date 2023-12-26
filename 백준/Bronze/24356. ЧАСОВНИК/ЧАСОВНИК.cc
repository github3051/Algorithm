#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t1, m1, t2, m2; cin >> t1 >> m1 >> t2 >> m2;
	int T1 = t1 * 60 + m1, T2 = t2 * 60 + m2;
	int ans = T2 - T1;
	if (ans < 0) ans += 1440;

	cout << ans << ' ' << ans / 30;
}