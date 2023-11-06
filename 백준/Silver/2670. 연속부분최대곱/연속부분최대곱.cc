#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> // for using setprecision, fixed
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<double> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	vector<double> maxArr;
	maxArr.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		double maxTmp = arr[i];
		double max = arr[i];
		for (int j = i + 1; j < n; ++j)
		{
			maxTmp *= arr[j];
			if (maxTmp > max)
			{
				max = maxTmp;
			}
		}
		maxArr.emplace_back(max);
	}

	sort(maxArr.begin(), maxArr.end(),greater<double>());

	cout << std::fixed << std::setprecision(3) << maxArr[0];
}