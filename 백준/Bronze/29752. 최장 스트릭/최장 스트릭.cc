#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int ans = 0, tmpAns = 0;
	for (int i = 0; i < n; ++i)
	{
		int s;
		cin >> s;
		if (s != 0)
		{
			tmpAns += 1;
		}
		else
		{
			tmpAns = 0;
		}


		ans = (ans > tmpAns ? ans : tmpAns);
	}

	cout << ans;
}