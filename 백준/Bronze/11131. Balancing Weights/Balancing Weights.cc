#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int sumWeight = 0;
		for (int i = 0; i < n; ++i)
		{
			int weight;
			cin >> weight;
			sumWeight += weight;
		}
		cout << (sumWeight == 0 ? "Equilibrium" : (sumWeight > 0 ? "Right" : "Left")) << '\n';
	}
}