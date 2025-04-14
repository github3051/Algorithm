#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> vec;
	for (int i = 1; i <= n; ++i)
	{
		//일단 i를 일의자리로 변환 -> 10으로 나누기
		if (i % 10 == k % 10 || i % 10 == 2 * k % 10)
		{
			continue;
		}
		vec.emplace_back(i);
	}

	cout << vec.size() << '\n';
	for (const vector<int>::iterator::value_type elem : vec)
	{
		cout << elem << ' ';
	}
}