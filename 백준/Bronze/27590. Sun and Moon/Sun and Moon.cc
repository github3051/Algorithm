#include <iostream>
#include <vector>

int main()
{
	int ds, ys, dm, ym;
	std::cin >> ds >> ys >> dm >> ym;

	if ((ys == 0 && ym == 0) || (ds == 0 && dm == 0) || (ds == 0 && ym == 0) || (ys == 0 && dm == 0))
	{
		std::cout << 0;
		return 0;
	}
	else if (ys == 0)
	{
		std::cout << dm;
		return 0;
	}
	else if (ym == 0)
	{
		std::cout << ds;
		return 0;
	}
	else
	{
		std::vector<bool> rightSunPosition(5001, false);
		for (int i = 1; ; ++i)
		{
			if (i * ys - ds > 5000)
			{
				break;
			}
			rightSunPosition[i * ys - ds] = true;
		}

		for (int i = 1; ; ++i)
		{
			if (rightSunPosition[i * ym - dm] == true)
			{
				std::cout << i * ym - dm;
				break;
			}
		}
	}
}