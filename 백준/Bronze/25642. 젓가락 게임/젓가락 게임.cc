#include <iostream>
using namespace std;

int main()
{
	int yj, yt;
	cin >> yt >> yj;

	for (int i = 0; ; ++i)
	{
		if (i % 2 == 0)
		{
			yj += yt;
		}
		else
		{
			yt += yj;
		}

		if (yj >= 5)
		{
			cout << "yt";
			return 0;
		}
		else if (yt >= 5)
		{
			cout << "yj";
			return 0;
		}
	}
}