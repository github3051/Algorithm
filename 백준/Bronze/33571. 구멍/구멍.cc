#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
	unordered_map<char, int> umap = { {'a',1},{'A',1},{'b',1},{'B',2},{'d',1},{'D',1},{'e',1},{'g',1},{'o',1},{'O',1},{'p',1},{'P',1},{'q',1},{'Q',1},{'R',1},{'@',1}};

	char c;
	int ans = 0;
	while (cin >> c)
	{
		if (umap.find(c) != umap.end())
		{
			ans += umap[c];
		}
	}
	cout << ans;
}