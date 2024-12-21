#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	int ans = n;
	while (n/m != 0)
	{
		ans += n / m;
		n /= m;
	}
	cout << ans;
}