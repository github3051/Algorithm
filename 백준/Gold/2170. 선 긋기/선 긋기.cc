#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int n;
	cin >> n;
	vector<pair<int, int>> line(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> line[i].first >> line[i].second;
	}

	sort(line.begin(), line.end());

	vector<pair<int,int>> ans;
	for (int i = 0; i < n; ++i)
	{
		if (ans.empty() || ans.back().second < line[i].first)
		{
			ans.emplace_back(line[i]);
		}
		else
		{
			if (ans.back().second < line[i].second)
			{
				ans.back().second = line[i].second;
			}
		}
	}

	int sum = 0;
	for (const auto& elem : ans)
	{
		sum += elem.second - elem.first;
	}

	cout << sum;
}