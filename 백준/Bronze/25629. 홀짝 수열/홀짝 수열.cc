
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int even = 0, odd = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp % 2 == 0)
		{
			even += 1;
		}
		else
		{
			odd += 1;
		}
	}

	if(even == odd || even +1 == odd)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}