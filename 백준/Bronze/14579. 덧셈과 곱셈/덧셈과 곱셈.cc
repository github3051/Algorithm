#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	
    int fSection = (1+a)*a/2;
	int ans = fSection;
	for (int i = a+1; i <= b; ++i)
	{
		ans = (ans *(fSection + i)) % 14579;
		fSection += i;
	}
	cout << ans;
}