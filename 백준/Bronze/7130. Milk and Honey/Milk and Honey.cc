#include <iostream>
using namespace std;


int main() {
	int m, h,n;
	cin >> m >> h >> n;

	int sum = 0;
	while (n--)
	{
		int cow, bee;
		cin >> cow >> bee;
		sum += (cow * m > bee * h ? cow * m : bee * h);
	}
	cout << sum;
}