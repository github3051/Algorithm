#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
	int start, end, numOfpeople;
};

void Recursion(const vector<Meeting>& vec, int vecSize, int startIdx, int currentSum, int& maxAns)
{
	maxAns = max(maxAns, currentSum); 

	for (int i = 0; i < vecSize; ++i)
	{
		if (vec[startIdx].end <= vec[i].start) 
		{
			Recursion(vec, vecSize, i, currentSum + vec[i].numOfpeople, maxAns);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector<Meeting> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i].start >> vec[i].end >> vec[i].numOfpeople;
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		Recursion(vec, n, i, vec[i].numOfpeople, ans);
	}

	cout << ans;
	return 0;
}