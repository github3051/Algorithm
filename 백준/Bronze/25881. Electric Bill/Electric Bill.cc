#include <iostream>
using namespace std;

int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		cout << tmp << ' ';
		tmp = (tmp > 1000 ? 1000*a + (tmp-1000) * b : tmp*a);
		cout << tmp << '\n';
	}
}