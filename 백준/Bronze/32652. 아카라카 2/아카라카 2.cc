#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string ans = "AKA";
	for (int i = 0; i < n; ++i)
	{
		ans += "RAKA";
	}
	cout << ans;
}