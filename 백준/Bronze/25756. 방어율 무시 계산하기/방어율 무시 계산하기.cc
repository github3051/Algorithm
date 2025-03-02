#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	double armorIgnoringVal = 0;
	while (n--)
	{
		double potion;
		cin >> potion;
		armorIgnoringVal = 1 - (1-armorIgnoringVal)*(1 - potion/100);
		cout << fixed << setprecision(6) << armorIgnoringVal * 100 << '\n';
	}
}