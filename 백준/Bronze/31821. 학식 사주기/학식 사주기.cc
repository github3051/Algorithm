#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> menu(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> menu[i];
	}

	int ans = 0;
	int nm;
	cin >> nm;
	for (int i = 0; i < nm; ++i)
	{
		int wantMenu;
		cin >> wantMenu;
		ans += menu[wantMenu - 1];
	}
	cout << ans;
}