#include <iostream>
using namespace std;

int main()
{
	int curr, amount;
	char c;
	while (true)
	{
		cin >> curr >> c >> amount;
		if (curr == 0 && amount == 0 && c == 'W')
		{
			break;
		}

		if (c == 'W')
		{
			if (curr - amount < -200)
			{
				cout << "Not allowed";
			}
			else
			{
				cout << curr - amount;
			}
		}
		else if (c == 'D')
		{
			cout << curr + amount;
		}
		cout << '\n';
	}
}