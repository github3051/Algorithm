#include <iostream>
using namespace std;

int main()
{
	char c,cMove;
	int i,iMove;
	cin >> c >> i >> cMove >> iMove;

	int cResult = (cMove > c ? cMove - c : c - cMove);
	int iResult = (iMove > i ? iMove - i : i - iMove);
	cout << (cResult < iResult ? cResult : iResult) << ' ' << (cResult < iResult ? iResult : cResult);

}