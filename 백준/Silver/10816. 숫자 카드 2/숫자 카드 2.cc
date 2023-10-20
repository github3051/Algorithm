#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int M;
	std::cin >> M;
	std::vector<int> sanggeunNum;
	sanggeunNum.reserve(500'000);
	for (int i = 0; i < M; ++i)
	{
		int temp;
		std::cin >> temp;
		sanggeunNum.emplace_back(temp);
	}

	std::stable_sort(sanggeunNum.begin(), sanggeunNum.end());

	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int chkNum;
		std::cin >> chkNum;
		std::cout << std::upper_bound(sanggeunNum.begin(), sanggeunNum.end(), chkNum) - std::lower_bound(sanggeunNum.begin(), sanggeunNum.end(), chkNum) << " ";
	}

	return 0;
}