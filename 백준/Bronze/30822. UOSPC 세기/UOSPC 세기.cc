#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int sLen;
	string str;
	cin >> sLen >> str;
	vector<int> alphabet(26, 0);
	for (int i = 0; i < sLen; ++i)
	{
		alphabet[str[i] - 'a'] += 1;
	}
	cout << min({ alphabet['u' - 'a'],alphabet['o' - 'a'],alphabet['s' - 'a'],alphabet['p' - 'a'],alphabet['c' - 'a'] });
}