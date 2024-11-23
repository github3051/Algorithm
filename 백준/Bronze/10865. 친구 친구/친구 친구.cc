#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	int n, m;
	cin >> n >> m;

	vector<int> ans(n, 0);
	for (int i = 0; i < m*2; ++i)
	{
		int tmp;
		cin >> tmp;
		ans[tmp - 1] += 1;
	}

	for (const vector<int>::iterator::value_type& elem : ans)
	{
		cout << elem << '\n';
	}
}