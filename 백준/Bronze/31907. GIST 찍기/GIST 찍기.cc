#include <iostream>
using namespace std;

void Print(const int& n, const char& c1, const char& c2, const char& c3, const char& c4)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << c1;
		}
		for (int j = 0; j < n; ++j)
		{
			cout << c2;
		}
		for (int j = 0; j < n; ++j)
		{
			cout << c3;
		}
		for (int j = 0; j < n; ++j)
		{
			cout << c4;
		}
		cout << '\n';
	}
}

int main()
{
	int k;
	cin >> k;
	Print(k, 'G', '.', '.', '.');
	Print(k, '.', 'I', '.', 'T');
	Print(k, '.', '.', 'S', '.');
}