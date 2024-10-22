#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		vector<int> vec(3);
		cin >> vec[0] >> vec[1] >> vec[2];
		sort(vec.begin(), vec.end());

		cout << "Case #" << i << ": ";
		if (vec[2] >= vec[1] + vec[0])
		{
			cout << "invalid!\n";
		}
		else if (vec[0] == vec[1] && vec[1] == vec[2])
		{
			cout << "equilateral\n";
		}
		else if (vec[0] == vec[1] || vec[1] == vec[2] || vec[2] == vec[0])
		{
			cout << "isosceles\n";
		}
		else if (vec[0] != vec[1] && vec[1] != vec[2] && vec[2] != vec[0])
		{
			cout << "scalene\n";
		}
	}
}