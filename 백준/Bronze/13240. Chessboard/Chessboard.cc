#include <iostream>
using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (i % 2 == 0)
			{
				cout << (j % 2 == 0 ? '*' : '.');
			}
			else
			{
				cout << (j % 2 == 0 ? '.' : '*');
			}
		}
		cout << '\n';
	}
}
