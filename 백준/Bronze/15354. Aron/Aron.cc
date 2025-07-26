#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, ans = 2; // prev로 +1, 마지막순서이므로 +1
	char prev;
	cin >> n >> prev;
	n--;
	while (n--)
	{
		char curr;
		cin >> curr;
		if (prev == curr)
			continue;
		else
			ans += 1;
		prev = curr;
	}
	cout << ans;
}