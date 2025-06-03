#include <iostream>
#include <string>
using namespace std;

int main()
{
	int l, d, x;
	cin >> l >> d >> x;

	for (int i = l; i <= d; ++i)
	{
		string tmp = to_string(i);
		int tmpLen = tmp.length();
		int tmpAns = 0;
		for (int j = 0; j < tmpLen; ++j)
		{
			tmpAns += tmp[j] - '0';
		}

		if (tmpAns == x)
		{
			cout << i << '\n';
			break;
		}
	}

	for (int i = d; i >= l; --i)
	{
		string tmp = to_string(i);
		int tmpLen = tmp.length();
		int tmpAns = 0;
		for (int j = 0; j < tmpLen; ++j)
		{
			tmpAns += tmp[j] - '0';
		}

		if (tmpAns == x)
		{
			cout << i;
			break;
		}
	}
}