#include <iostream>
using namespace std;

int main()
{
	int maxSize, n, m;
	int currSize = 0;
	cin >> maxSize >> n >> m;

	for (int i = 0; i < n + m; ++i)
	{
		int input;
		cin >> input;

		currSize += (input == 1 ? 1 : -1);

		if (currSize > maxSize)
		{
			maxSize *= 2;
		}
	}

	cout << maxSize;
}
