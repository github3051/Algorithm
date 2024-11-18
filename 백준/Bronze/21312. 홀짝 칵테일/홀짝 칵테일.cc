#include <iostream>
#include <vector>
using namespace std;

bool chk(const int& a, const int& b)
{
	if (a % 2)
	{
		if (b % 2)
		{
			return a < b;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (b % 2)
		{
			return true;
		}
		else
		{
			return a < b;
		}
	}
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	vector<int> vec = { a,b,c,a * b,b * c,c * a ,a*b*c};
	int ans = vec[0];
	int vLen = vec.size();
	for (int i = 1; i < vLen; ++i)
	{
		if (chk(ans, vec[i]))
		{
			ans = vec[i];
		}
	}
	cout << ans;
}