#include <iostream>
using namespace std;

void Print(const int& row, const int& col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << '@';
		}
		cout << '\n';
	}
}

int main()
{
	int n;
	cin >> n;

	Print(n,5 * n);
	Print(n,n);
	Print(n,5 * n);
	Print(n, n);
	Print(n, n);
}