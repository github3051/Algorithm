#include <iostream>
using namespace std;

int main()
{
	int br, bc, dr, dc, jr, jc;
	cin >> br >> bc >> dr >> dc >> jr >> jc;

	int brjr = (jr > br ? jr - br : br - jr);
	int bcjc = (jc > bc ? jc - bc : bc - jc);
	int bessie = (brjr > bcjc ? brjr : bcjc);
	int daisy = (jr > dr ? jr - dr : dr - jr) + (jc > dc ? jc - dc : dc - jc);

	if (bessie == daisy)
	{
		cout << "tie";
	}
	else if (bessie > daisy)
	{
		cout << "daisy";
	}
	else
	{
		cout << "bessie";
	}
}