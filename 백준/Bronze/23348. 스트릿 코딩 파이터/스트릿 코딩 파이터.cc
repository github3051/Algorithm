#include <iostream>
//#include <string>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int n, ans = 0;
	cin >> n;
	while (n--)
	{
		int tmp1, tmp2, tmp3;
		int tmpAns = 0;

		for (int i = 0; i < 3; ++i)
		{
			cin >> tmp1 >> tmp2 >> tmp3;
			tmpAns += a * tmp1 + b * tmp2 + c * tmp3;
		}
		
		ans = (ans > tmpAns ? ans : tmpAns);
	}
	cout << ans;
}