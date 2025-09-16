#include <iostream>
using namespace std;

int main() {
	string int1, int2;
	cin >> int1 >> int2;
	int i1Len = int1.length();
	int i2Len = int2.length();
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < i1Len; ++i)
	{
		sum1 += (int1[i] - '0');
	}

	for (int i = 0; i < i2Len; ++i)
	{
		sum2 += (int2[i] - '0');
	}

	cout << (sum1*i1Len == sum2* i2Len ? 0 : (sum1* i1Len > sum2* i2Len ? 1 : 2));
}