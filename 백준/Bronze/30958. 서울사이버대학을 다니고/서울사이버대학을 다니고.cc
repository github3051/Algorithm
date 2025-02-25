#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string str;
	cin >> n;
	cin.ignore();
	getline(cin, str);

	vector<int> alpha(26, 0);
	for (int i = 0; i < n; ++i)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.')
		{
			continue;
		}

		alpha[str[i] - 'a'] += 1;
	}
	cout << *max_element(alpha.begin(), alpha.end());
}