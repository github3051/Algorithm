#include <iostream>
//#include <string>

using namespace std;

int main()
{
	string str;
	int ans = 0;
	while (getline(cin, str))
	{
		ans += 1;
	}
	cout << ans;
}