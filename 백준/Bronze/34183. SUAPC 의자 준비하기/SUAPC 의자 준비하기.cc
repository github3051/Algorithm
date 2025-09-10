#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int ans = (n * 3 - m) * a + b;
	cout << (n*3 - m <= 0 ? 0 : ans);
}