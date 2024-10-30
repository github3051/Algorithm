#include <iostream>
using namespace std;

int main() {
	while (true)
	{
		int lv;
		cin >> lv;

		if (lv == 0)
		{
			break;
		}


		int ans = 1;
		for (int i = 0; i < lv; ++i)
		{
			int leaf, prune;
			cin >> leaf >> prune;
			ans = ans*leaf - prune;
		}

		cout << ans << '\n';
	}
}