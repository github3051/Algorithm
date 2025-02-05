#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int x[4];
	int y[4];
	for (int i = 0; i < 4; ++i)
	{
		cin >> x[i] >> y[i];
	}
	int oneSide = max(*max_element(x,x+4) - *min_element(x,x+4), *max_element(y, y + 4) - *min_element(y,y+4));
	cout << oneSide * oneSide;
}