#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char c;
	cin >> c;

	int ans = 'l' - 'i' + 'o' - 'l' + 'v' - 'o' + 'v' - 'e' + 'y' - 'e' + 'y' - 'o' + 'o' - 'n' + 's' - 'n' + 's' - 'e' + 'i' - 'e';
	if (c >= 'I')
	{
		cout << ans + c - 'I';
	}
	else
	{
		cout << ans + 'I' - c;
	}
}