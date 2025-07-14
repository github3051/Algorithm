#include <iostream>
using namespace std;

int main() 
{
	int sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		int tmp;
		cin >> tmp;
		sum += tmp;
	}

	cout << (sum + 300 > 1800 ? "No" : "Yes");
}