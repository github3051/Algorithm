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
    
    reverse(arr.begin(),arr.end());

	vector<int> arrTmp;
	arrTmp.emplace_back(arr[0]);
	for (int i = 1; i < n; ++i)
	{
		if (arrTmp.back() < arr[i])
		{
			arrTmp.emplace_back(arr[i]);
		}
		else if (arrTmp.back() > arr[i])
		{
			*lower_bound(arrTmp.begin(), arrTmp.end(), arr[i]) = arr[i];
		}
	}

	cout << n - arrTmp.size();
}