#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
	int n;
	cin >> n;

	long long sum = 0;
	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < n; ++col)
		{
			int tmp;
			cin >> tmp;
			sum += tmp;
		}
	}
	cout << sum;
}