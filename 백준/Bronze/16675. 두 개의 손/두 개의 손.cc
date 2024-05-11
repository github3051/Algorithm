#include <iostream>
using namespace std;

int main()
{
	char ml, mr, tl, tr;
	cin >> ml >> mr >> tl >> tr;

	if (ml == mr)
	{
		if (ml == 'R')
		{
			if (tl == 'P' || tr == 'P')
			{
				cout << "TK";
			}
			else if (tl == 'S' && tr == 'S')
			{
				cout << "MS";
			}
			else
			{
				cout << '?';
			}
		}
		else if (ml == 'S')
		{
			if (tl == 'R' || tr == 'R')
			{
				cout << "TK";
			}
			else if (tl == 'P' && tr == 'P')
			{
				cout << "MS";
			}
			else
			{
				cout << '?';
			}
		}
		else if (ml == 'P')
		{
			if (tl == 'S' || tr == 'S')
			{
				cout << "TK";
			}
			else if (tl == 'R' && tr == 'R')
			{
				cout << "MS";
			}
			else
			{
				cout << '?';
			}
		}
	}
	else if (tl == tr)
	{
		if (tl == 'R')
		{
			if (ml == 'P' || mr == 'P')
			{
				cout << "MS";
			}
			else if (ml == 'S' && mr == 'S')
			{
				cout << "TK";
			}
			else
			{
				cout << '?';
			}
		}
		else if(tl == 'S')
		{
			if (ml == 'R' || mr == 'R')
			{
				cout << "MS";
			}
			else if (ml == 'P' && mr == 'P')
			{
				cout << "TK";
			}
			else
			{
				cout << '?';
			}
		}
		else if (tl == 'P')
		{
			if (mr == 'S' || ml == 'S')
			{
				cout << "MS";
			}
			else if (ml == 'R' && mr == 'R')
			{
				cout << "TK";
			}
			else
			{
				cout << '?';
			}
		}
	}
	else
	{
		cout << '?';
	}
	
}