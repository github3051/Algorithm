#include <iostream>
using namespace std;

int main()
{
	int lv;
	cin >> lv;
	if (lv < 210)
	{
		cout << (lv + 8 - 210 < 4 ? 1 : 2);
	}
	else if (lv < 220)
	{
		cout << (lv + 4 - 220 < 2 ? 2 : 3);
	}
	else if (lv < 230)
	{
		cout << (lv + 2 - 230 < 1 ? 3 : 4);
	}
	else
	{
		cout << 4;
	}
}