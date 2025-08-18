#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		long long num = stoll(a) + stoll(b);
		string ans = to_string(num);
		reverse(ans.begin(), ans.end());
		cout << stoll(ans) << '\n';
	}
}
