#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int sum = 0;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n-1; ++i)
	{
		sum += arr[i];
	}
	cout << sum;
}