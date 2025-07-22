#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	cin.ignore();
	vector<string> sVec(n+1);
	for (int i = 1; i <= n; ++i)
	{
		getline(cin, sVec[i]);
	}


	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int tmp;
		cin >> tmp;
		cout << "Rule " << tmp << ": ";
		if (1 <= tmp && tmp <= n)
		{
			cout << sVec[tmp];
		}
		else
		{
			cout << "No such rule";
		}
		cout << '\n';
	}
}