#include <iostream>
#include <vector>
using namespace std;

void Change(const char& c, const int& d)
{
	if (d == 1)
	{
		if(c == 'd')
		{
			cout << 'q';
		}
		else if(c == 'b')
		{
			cout << 'p';
		}
		else if(c == 'q')
		{
			cout << 'd';
		}
		else if(c == 'p')
		{
			cout << 'b';
		}
	}
	else if (d == 2)
	{
		if (c == 'd')
		{
			cout << 'b';
		}
		else if (c == 'b')
		{
			cout << 'd';
		}
		else if (c == 'q')
		{
			cout << 'p';
		}
		else if (c == 'p')
		{
			cout << 'q';
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, d;
	cin >> n >> d;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			char c;
			cin >> c;

			Change(c, d);
		}
		cout << '\n';
	}
}