#include <iostream>
using namespace std;

int main()
{
	int p, r;
	cin >> p >> r;

	int v = p*10 / r;
	cout << (v < 2 ? "weak" : (v < 4 ? "normal" : (v < 6 ? "strong" : "very strong")));
}