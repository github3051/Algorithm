#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n%2 == 1)
	{
		cout << 0;
	}
	else if(n%2 == 0)
	{
		cout << ((n / 2) % 2 == 1 ? 1 : 2);
	}
}