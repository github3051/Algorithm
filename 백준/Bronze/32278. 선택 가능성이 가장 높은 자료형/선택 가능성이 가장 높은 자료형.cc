#include <iostream>
#include <climits>
using namespace std;

int main()
{
	long long num;
	cin >> num;

	if (SHRT_MIN <= num && num <= SHRT_MAX)
	{
		cout << "short";
	}
	else if (INT_MIN <= num && num <= INT_MAX)
	{ 
		cout << "int";
	}
	else if (LLONG_MIN <= num && num <= LLONG_MAX)
	{
		cout << "long long";
	}
}