#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;

	double ans = sqrt(3)*n*n/4;
	
	cout << fixed << setprecision(9) << ans;
}