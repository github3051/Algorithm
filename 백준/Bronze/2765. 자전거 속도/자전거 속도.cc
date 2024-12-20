#include <iostream>
#include <iomanip>
using namespace std;

const double PIE = 3.1415927;

int main()
{
	int idx = 1;
	while (true)
	{
		double diameter, rotations, time;
		cin >> diameter >> rotations >> time;

		if (rotations == 0)
		{
			break;
		}

		double dist = PIE * diameter * rotations / 12 / 5280;
		cout << fixed << setprecision(2) <<"Trip #" << idx << ": " << dist << ' ' << dist * 3600 / time << '\n';
		idx += 1;
	}
}