#include <iostream>
using namespace std;

int main()
{
	int call, data;
	int teleCosts[3][3] = { {30,40},{35,30},{40,20} };
	while (true)
	{
		cin >> call >> data;
		if (call == 0 && data == 0)
		{
			break;
		}
		int ParsTel = call * teleCosts[0][0] + data * teleCosts[0][1];
		int ParsCell = call * teleCosts[1][0] + data * teleCosts[1][1];
		int ParsPhone = call * teleCosts[2][0] + data * teleCosts[2][1];
		cout << (ParsTel < ParsCell ? ParsTel : (ParsCell < ParsPhone ? ParsCell : ParsPhone)) << '\n';
	}
}