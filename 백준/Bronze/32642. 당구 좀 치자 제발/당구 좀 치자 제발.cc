#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int angry = 0;
    long long total = 0;
	for (int i = 0; i < n; ++i)
	{
		bool isRaining;
		cin >> isRaining;

		if (isRaining == 1)
		{
			angry += 1;
		}
		else
		{
			angry -= 1;
		}

		total += angry;
	}

	cout << total;
}