#include <iostream>
#include <vector>
using namespace std;

void PrintAtSign(const int& n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << '@';
	}
}

void PrintBlank(const int& n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << ' ';
	}
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		PrintAtSign(n * 3);
		PrintBlank(n);
		PrintAtSign(n);
		cout << '\n';
	}

	for (int i = 0; i < n * 3; ++i)
	{
		PrintAtSign(n);
		PrintBlank(n);
		PrintAtSign(n);
		PrintBlank(n);
		PrintAtSign(n);
		cout << '\n';
	}

	for (int i = 0; i < n; ++i)
	{
		PrintAtSign(n); 
		PrintBlank(n);
		PrintAtSign(n * 3);
		cout << '\n';
	}
}