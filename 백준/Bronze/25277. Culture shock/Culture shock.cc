#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n, ans = 0;
	cin >> n;

	vector<string> chkStr = { "she","her","he","him" };
	int csSize= chkStr.size();
	while(n--)
	{
		string str;
		cin >> str;
		for (int i = 0; i < csSize; ++i)
		{
			if (str == chkStr[i])
			{
				ans += 1;
			}
		}
	}
	cout << ans;
}
