#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int h, l, a, b;
	cin >> h >> l >> a >> b;

	bool isPossible = false;
	
	if ( (2*h >= a && l >= b ) || (2*h >= b && l >= a))
	{
		isPossible = true;
	}

	cout << (isPossible == true ? "YES" : "NO");
}