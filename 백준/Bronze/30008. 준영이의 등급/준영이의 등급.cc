#include <iostream>
using namespace std;

int main()
{
	int total, nSubjects;
	cin >> total >> nSubjects;

	while (nSubjects--)
	{
		int myLank;
		cin >> myLank;

		if (myLank * 100 / total <= 4 )
		{
			cout << 1 << ' ';
		}
		else if (myLank * 100 / total <= 11 )
		{
			cout << 2 << ' ';
		}
		else if (myLank * 100 / total <= 23 )
		{
			cout << 3 << ' ';
		}
		else if (myLank * 100 / total <= 40 )
		{
			cout << 4 << ' ';
		}
		else if (myLank * 100 / total <= 60 )
		{
			cout << 5 << ' ';
		}
		else if (myLank * 100 / total <= 77 )
		{
			cout << 6 << ' ';
		}
		else if (myLank * 100 / total <= 89 )
		{
			cout << 7 << ' ';
		}
		else if (myLank * 100 / total <= 96 )
		{
			cout << 8 << ' ';
		}
		else
		{
			cout << 9 << ' ';
		}
	}
}