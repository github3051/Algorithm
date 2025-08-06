#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> sVec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> sVec[i];
		sVec[i] += "DORO";
	}

	for (const auto& elem : sVec)
	{
		cout << elem << ' ';
	}
}