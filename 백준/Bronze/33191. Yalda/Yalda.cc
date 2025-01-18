#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int money, wm, pg, nuts;
	cin >> money >> wm >> pg >> nuts;

	if (money >= wm)
	{
		cout << "Watermelon";
	}
	else if (money >= pg)
	{
		cout << "Pomegranates";
	}
	else if (money >= nuts)
	{
		cout << "Nuts";
	}
	else
	{
		cout << "Nothing";
	}
}