#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<char> myAns(n);
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> myAns[i];
	}

	for (int i = 0; i < n; ++i)
	{
		char correct;
		cin >> correct;
		ans += (myAns[i] == correct ? 1 : 0);
	}

	cout << ans;
}