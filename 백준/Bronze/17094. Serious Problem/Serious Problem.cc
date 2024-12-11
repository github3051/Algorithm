#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	string str;
	cin >> n >> str;

	int e = 0;
	for (int i = 0; i < n; ++i)
	{
		if (str[i] == 'e')
		{
			e += 1;
		}
	}

	if (n - e == e)
	{
		cout << "yee";
	}
	else if (n - e > e)
	{
		cout << '2';
	}
	else
	{
		cout << 'e';
	}
}