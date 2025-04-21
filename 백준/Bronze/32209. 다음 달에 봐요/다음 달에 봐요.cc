#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int q, nProblem = 0;
	cin >> q;
	while (q--)
	{
		int a, b;
		cin >> a >> b;

		if (a == 1)
		{
			nProblem += b;
		}
		else if(a == 2)
		{
			nProblem -= b;
		}

		if (nProblem < 0)
		{
			cout << "Adios";
			return 0;
		}
	}

	cout << "See you next month";
}