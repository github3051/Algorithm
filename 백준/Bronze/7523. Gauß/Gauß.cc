#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for(int i=1; i<=t; ++i)
	{
		long long n, m;
		cin >> n >> m;


		cout << "Scenario #" << i  << ":\n" << (m - n + 1)*(n+m)/2 << "\n\n";
	}
}