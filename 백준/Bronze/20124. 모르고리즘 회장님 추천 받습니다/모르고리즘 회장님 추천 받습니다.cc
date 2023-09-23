#include <iostream>
#include <vector>
#include <algorithm>

bool Compare(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main()
{
	int n;
	std::cin >> n;

	std::vector<std::pair<std::string, int>> list(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> list[i].first >> list[i].second;
	}
	std::sort(list.begin(), list.end(), Compare);

	std::cout << list[0].first;
}

// Compare함수 만들때 요소를 짜꾸 vector로 만든다. 신경쓸것