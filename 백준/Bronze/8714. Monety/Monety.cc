#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int front = 0, back = 0;
	for (int i = 0; i < n; ++i)
	{
		bool coin;
		cin >> coin;
		if (coin)
			front += 1;
		else
			back += 1;
	}
	cout << (front < back ? front : back);
}