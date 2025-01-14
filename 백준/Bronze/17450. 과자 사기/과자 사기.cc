#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<double> ans;
	for (int i = 0; i < 3; ++i)
	{
		double price, weight;
		cin >> price >> weight;
		ans.emplace_back(10*weight/(10*price >= 5000 ? 8*price - 500 : 8*price));
	}
	
	if ( *max_element(ans.begin(), ans.end()) == ans[0])
	{
		cout << 'S';
	}
	else if (*max_element(ans.begin(), ans.end()) == ans[1])
	{
		cout << 'N';
	}
	else
	{
		cout << 'U';
	}
}