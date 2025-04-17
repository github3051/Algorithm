#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, t;
	cin >> n >> t;

	int handsUp = 1;
	bool plus = true;
	for (int i = 1; i < t; ++i)
	{
		if (handsUp == 2 * n || (i != 1 && handsUp == 1))
		{
			plus = !plus;
			handsUp;
		}

		handsUp = handsUp + (plus == true ? 1 : -1);
	}
	cout << handsUp;
}