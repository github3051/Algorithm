#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int eSurface = 0, platform= 0 ;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		eSurface += a;
		platform += b;
		cout << eSurface - platform << '\n';
	}
}