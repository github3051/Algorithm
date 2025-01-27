#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> ans(4);
	for (int i = 0; i < n; ++i)
	{
		int gp, cp, np;
		cin >> gp >> cp >> np;
		if (gp == 1)
		{
			ans[3] += 1;
		}
		else
		{
			cp == 1 || cp == 2 ? ans[0]++ : (cp == 3 ? ans[1]++ : ans[2]++);
		}
	}

	for(const auto& elem : ans)
	{
		cout << elem << '\n';
	}
}