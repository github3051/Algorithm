#include <iostream>
using namespace std;


int main()
{
	int currMoney = 5000;
	int input, price = 0;
	while (cin >> input)
	{
		price += (input == 1 ? 500 : (input == 2 ? 800 : 1000));
	}
	cout << currMoney - price;
}