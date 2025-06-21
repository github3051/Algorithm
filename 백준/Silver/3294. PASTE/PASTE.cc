#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	list<int> number;

	vector<list<int>::iterator> positions(n + 1);
	positions[0] = number.begin();
	for (int i = 1; i <= n; ++i)
	{
		number.emplace_back(i);
	}

	for (int i = 0; i < k; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;

		//positions 초기화
		for (auto it = number.begin(); it != number.end(); ++it) {
			positions[*it] = it;
			//cout << *it << '\n';
		}

		auto itL = number.begin(), itR = number.begin();
		advance(itL, a - 1), advance(itR, b);

		std::list<int> temp;
		temp.splice(temp.begin(), number, itL, itR);

		auto dest = number.begin();
		advance(dest, c);
		number.splice(dest, temp);
	}

	auto output = number.begin();
	advance(output, 10);
	for (auto it = number.begin(); it != output; ++it)
		cout << *it << '\n';
}