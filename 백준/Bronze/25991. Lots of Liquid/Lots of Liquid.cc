#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double dSum = 0;
	for (int i = 0; i < n; ++i)
	{
		double dTmp;
		cin >> dTmp;
		dSum += dTmp*dTmp*dTmp;
	}

	cout << std::fixed << std::setprecision(6) << cbrt(dSum);
}