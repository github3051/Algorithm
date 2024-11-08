#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		int caseNum;
		cin >> caseNum;

		cout << caseNum << '\n';

		double d, a, b, f;
		cin >> d >> a >> b >> f;

		cout << fixed << setprecision(6) << f * d / (a + b) << '\n';
	}
}