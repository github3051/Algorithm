#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;

	int ans = 0;
	int abstention = 0;
	for (int i = 0; i < n; ++i)
	{
		int vote;
		cin >> vote;
		ans += vote;
		if (vote == 0)
		{
			abstention += 1;
		}
	}

	if (abstention >= (n+1) / 2)
	{
		cout << "INVALID";
	}
	else if (ans > 0)
	{
		cout << "APPROVED";
	}
	else if(ans <= 0)
	{
		cout << "REJECTED";
	}
}