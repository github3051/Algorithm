#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> p(n + 2, 1);
	p[2] = 2;
	for (int i = 3; i <= n; ++i)
	{
		p[i] = p[i-2]+p[i-1];
	}
	cout << p[n];
}