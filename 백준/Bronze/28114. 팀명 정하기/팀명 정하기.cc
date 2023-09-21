// 연산처리(100으로 나눈)가 된 값을 넣어 정렬할 숫자 배열 한개와, pair<int,string>인 배열 한개를 만들어서 정렬한 후 출력한다.

#include <iostream>
#include <vector>		// 배열 컨테이너
#include <algorithm>	// sort사용

int CompareWithinRank(const std::pair<int, std::string>& a, const std::pair<int, std::string>& b)
{
	return a.first > b.first;
}

int main()
{
	std::vector<int> enrollment;
	std::vector<std::pair<int, std::string>> rank;

	int enrollTmp, rankTmp;
	std::string rankStrTmp;
	for (int i = 0; i < 3; ++i)
	{
		std::cin >> rankTmp >> enrollTmp >> rankStrTmp;
		enrollment.push_back(enrollTmp%100);
		rank.push_back({rankTmp, rankStrTmp});
	}
	std::sort(enrollment.begin(), enrollment.end());
	std::sort(rank.begin(), rank.end(), CompareWithinRank);
	
	for (const std::vector<int>::value_type& elem : enrollment)
	{
		std::cout << elem;
	}
	std::cout << '\n';
	for (const std::vector<std::pair<int, std::string>>::value_type& elem : rank) 
	{
		std::cout << elem.second[0];
	}
}