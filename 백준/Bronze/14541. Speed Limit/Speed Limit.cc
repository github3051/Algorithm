#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int n;
		cin >> n;

		if (n == -1)
			break;

		int ans = 0;
		int prevTime = 0;
		for (int i = 0; i < n; ++i)
		{
			int speed, time;
			cin >> speed >> time;
			ans += speed * (time - prevTime);
			prevTime = time;
		}
		cout << ans << " miles\n";
	}
}