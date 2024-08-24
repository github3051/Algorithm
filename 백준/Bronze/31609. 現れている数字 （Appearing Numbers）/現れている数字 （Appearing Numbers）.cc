#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n;
	cin >> n;

	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		s.insert(tmp);
	}

	//for (const auto& elem : s)
	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << '\n';
	}
}