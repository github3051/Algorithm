#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> person(n);
	for (int i = 0; i < n; ++i)
	{
		int present;
		cin >> present;
		person[present - 1] = i + 1;
	}

	for (const auto& elem : person)
	{
		cout << elem << '\n';
	}
}