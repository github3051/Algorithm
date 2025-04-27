#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	double n, m;
	cin >> n >> m;
	
	double time = 24 * 60 * (m / n);
	cout << (time/60 < 10 ? "0" : "") << (int)time / 60 << ':' << ( (int)time % 60 < 10 ? "0" : "")<< (int)time % 60;
}
