#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> factorial(6, 1);
	for (int i = 1; i <= 5; ++i) // 길이가 5자리
	{
		factorial[i] *= factorial[i-1] * i;
	}

	while (true)
	{
		string str;
		cin >> str;
		if (str == "0")
		{
			break;
		}

		int len = str.length();
		int ans = 0;
		for (int i = 0; i < len; ++i)
		{
			ans += (str[i] - '0') * factorial[len - i];
		}
		cout << ans << '\n';
	}
}