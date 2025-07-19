#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int num;
		cin >> num;
		bool isInt = false;
		for (int i = 1; i*i <= num; ++i)
		{
			if (i * i == num)
			{
				isInt = true;
				break;
			}
		}

		cout << (isInt ? 1 : 0) << '\n';
	}
}