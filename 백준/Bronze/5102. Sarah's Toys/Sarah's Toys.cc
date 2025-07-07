#include <iostream>
using namespace std;


int main() {
	
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
		{
			break;
		}

		if ((a - b) == 1)
		{
			cout << 0 << ' ' << 0;
		}
		else if ((a - b) == 3)
		{
			cout << 0 << ' ' << 1;
		}
		else
		{
			if ((a - b) % 2)
			{
				cout << (a - b) / 2 - 1;
			}
			else
			{
				cout << (a - b) / 2;
			}
			cout << ' ' << (a - b) % 2;
		}
		cout << '\n';
	}
}