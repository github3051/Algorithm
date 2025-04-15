#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	int rows = 1, cols = 1;
	while (true)
	{
		if (rows * cols >= n)
		{
			break;
		}
		rows += 1;
		cols += 1;
	}
	if ((rows - 1) * cols >= n)
	{
		rows -= 1;
	}

	cout << rows << ' ' << cols;
}