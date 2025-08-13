#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string str1, str2;
	cin >> str1 >> str2;

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (str1[i] == str2[i] && str1[i] == 'C')
			ans += 1;
	}
	cout << ans;
}
