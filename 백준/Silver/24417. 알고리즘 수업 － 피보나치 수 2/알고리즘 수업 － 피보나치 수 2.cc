#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int dpCnt = 1;
	int a = 1;
	int tmp;
	for (int i = 3; i <= n; ++i)
	{
		tmp = dpCnt;
		dpCnt = (a + dpCnt) % 1'000'000'007;
		a = tmp;
	}
	cout << dpCnt << ' ' << (n-2) % 1'000'000'007;
}