#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		double input;
		cin >> input;
		if (input == 0.00)
			break;

		int ans = 0;
		double sum = 0;
		for (double i = 2; ; i++)
		{
			sum += 1 / i;
			ans += 1;
			if (sum >= input)
				break;
		} 
		cout << ans << " card(s)\n";
	}
}