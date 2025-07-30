#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	string str;
	cin >> n >> str;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (str[i] == 'O')
			ans += 1;
		else
			ans -= 1;
	}
	cout << (ans < 0 ? "No" : "Yes");
}