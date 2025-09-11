#include <iostream>
using namespace std;

int main() {
	int a, b, c, t;
	cin >> a >> b >> c >> t;

	int ans = a + (t>30 ? ((t-30+b-1)/b)* c : 0);
	cout << ans;
}
