#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, a, b, s, t;
	cin >> n >> a >> b >> s >> t;
	
	if (s > t)
	{
		int tmp = s;
		s = t;
		t = tmp;
	}

	if (s >= b || t <= a)
	{
		cout << "Outside";
	}
	else if(a < s && t < b)
	{
		cout << "City";
	}
	else
	{
		cout << "Full";
	}
}