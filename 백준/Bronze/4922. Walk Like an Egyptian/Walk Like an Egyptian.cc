
#include <iostream>
#include <vector>
using namespace std;

int main() {
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;

		int result = 1;
		for (int i = 1; i < n; ++i)
		{
			result += 2 * i;
		}
		cout << n << " => " << result << '\n';
	}
}
