#include <iostream>
using namespace std;

int main() {
	while (true)
	{
		int y;
		cin >> y;

		if (y == 0)
			break;

		cout << y << ' ';
		if (y % 4 == 0 && y >= 1896)
		{
			if ((1914 <= y && y <= 1918) || (1939 <= y && y <= 1945))
				cout << "Games cancelled";
			else if (y > 2020)
				cout << "No city yet chosen";
			else
				cout << "Summer Olympics";
		}
		else
			cout << "No summer games";

		cout << '\n';
	}
}