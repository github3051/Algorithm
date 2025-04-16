#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, d;
	cin >> n >> d;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			char c;
			cin >> c;

			if (d == 1)
			{
				cout << (c == 'b' ? 'p' : c == 'd' ? 'q' : c == 'q' ? 'd' :'b');
			}
			else if (d == 2)
			{
				cout << (c == 'd' ? 'b' : c == 'b' ? 'd' : c == 'q' ? 'p' : 'q');
			}
		}
		cout << '\n';
	}
}