#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int perfect = 0;
		for (int j = 1; j <= 10; ++j)
		{
			int tmp;
			cin >> tmp;
			if ( (j-1) % 5 + 1 == tmp)
			{
				perfect += 1;
			}
		}
		if (perfect == 10)
		{
			cout << i << '\n';
		}
	}
}