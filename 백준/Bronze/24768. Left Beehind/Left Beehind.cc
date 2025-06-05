#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int good, bad;
		cin >> good >> bad;
		if (good == bad && bad == 0)
		{
			break;
		}

		if (good + bad == 13)
		{
			cout << "Never speak again";
		}
		else if (good == bad)
		{
			cout << "Undecided";
		}
		else if (good > bad)
		{
			cout << "To the convention";
		}
		else
		{
			cout << "Left beehind";
		}
		cout << ".\n";
	}
}