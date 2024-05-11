// MS가 같은 모양을 내는 경우 3가지와 TK가 같은 모양을 내는 경우 3가지 경우, 그 외 1개 총 7개의 경우만 구하면 된다.
// SSPP같이 둘 다 겹치는 경우도 위에 포함된다.

#include <iostream>
using namespace std;

int main()
{
	char ml, mr, tl, tr;
	cin >> ml >> mr >> tl >> tr;

	if ((ml == 'R' && mr == 'R') && (tl == 'P' || tr == 'P'))
	{
		cout << "TK";
	}
	else if ((tl == 'R' && tr == 'R') && (ml == 'P' || mr == 'P'))
	{
		cout << "MS";			
	}	
	else if ((ml == 'S' && mr == 'S') && (tl == 'R' || tr == 'R'))
	{
		cout << "TK";
	}
	else if ((tl == 'S' && tr == 'S') && (ml == 'R' || mr == 'R'))
	{
		cout << "MS";
	}
	else if ((ml == 'P' && mr == 'P') && (tl == 'S' || tr == 'S'))
	{				 			  
		cout << "TK";
	}				 			  
	else if ((tl == 'P' && tr == 'P') && (ml == 'S' || mr == 'S'))
	{
		cout << "MS";
	}
	else
	{
		cout << '?';
	}
}
