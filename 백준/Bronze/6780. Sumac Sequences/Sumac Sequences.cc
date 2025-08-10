#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t1, t2;
	cin >> t1 >> t2;

	int ans = 2;
	while (true)
	{
		if (t1 - t2 < 0)
			break;

		int tmp = t2;
		t2 = t1 - t2;
		t1 = tmp;
		ans+= 1;
	}
	cout << ans;
}