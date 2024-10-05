#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	double nineFactorial = 362880;
	double ans = 1;
	vector<double> vec(10);
	for (int i = 0; i < 10; ++i)
	{
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	for (int i = 1; i < 10; ++i)
	{
		ans *= vec[i] * 10;
	}

	cout << fixed;
	cout.precision(6);

	cout << ans / nineFactorial;
} 