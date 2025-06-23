#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> sVec;
	while (n--)
	{
		string str;
		cin >> str;
		if (str.length() == 3)
		{
			sVec.emplace_back(str);
		}
	}
	sort(sVec.begin(), sVec.end());
	cout << sVec[0];
}