#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void Print(const int& rows, const int& at1, const int& blank, const int& at2) // cols 를 @와 blank로 나누기
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < at1; ++j)
		{
			cout << '@';
		}

		for (int j = 0; j < blank; ++j)
		{
			cout << ' ';
		}


		for (int j = 0; j < at2; ++j)
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
	
	Print(n, n, n * 3, n);
	Print(n, n, n * 2, n);
	Print(n, 3*n,0,0);
	Print(n, n, n * 2, n);
	Print(n, n, n * 3, n);
}