#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int x1[3];
		int x2[3];
		
		for (int i = 0; i < 3; ++i)
			cin >> x1[i];

		for (int i = 0; i < 3; ++i)
			cin >> x2[i];

		int sum = 0;
		for (int i = 0; i < 2; ++i)
			sum += abs(x1[i] - x2[i]);

		cout << sum + x1[2] + x2[2] << '\n';
	}
}