#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int idx = 1;
	while (true)
	{
		int par, john;
		cin >> par >> john;

		if (par == 0 && john == 0)
			break;

		cout << "Hole #" << idx << '\n';

		if (john == 1)
			cout << "Hole-in-one";
		else if (par - 3 == john)
			cout << "Double eagle";
		else if (par - 2 == john)
			cout << "Eagle";
		else if (par - 1 == john)
			cout << "Birdie";
		else if (par == john)
			cout << "Par";
		else if (par + 1 == john)
			cout << "Bogey";
		else if (par + 2 <= john)
			cout << "Double Bogey";

		cout << ".\n\n";
		idx += 1;
	}
}