#include <iostream>
using namespace std;

int Calculate(int a, int b, char c)
{
	if (c == '+')
	{
		return a + b;
	}
	else if (c == '-')
	{
		return a - b;
	}
	else if (c == '*')
	{
		return a * b;
	}
	else if (c == '/')
	{
		return a / b;
	}
}

int main()
{
	int a, c, e;
	char b, d;
	cin >> a >> b >> c >> d >> e;

	int maxCal, minCal;
	if (Calculate(Calculate(a, c, b), e, d) > Calculate(a, Calculate(c, e, d), b))
	{
		maxCal = Calculate(Calculate(a, c, b), e, d);
		minCal = Calculate(a, Calculate(c, e, d), b);
	}
	else
	{
		maxCal = Calculate(a, Calculate(c, e, d), b);
		minCal = Calculate(Calculate(a, c, b), e, d);
	}
	cout << minCal << '\n' << maxCal;
}