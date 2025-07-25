#include <iostream>
using namespace std;

int main() 
{
	int n, ans = 10000;
	cin >> n;
	while (n--)
	{
		int needed,existing;
		cin >> needed >> existing;
		ans = (ans > existing / needed ? existing / needed : ans);
	}
	cout << ans;
}