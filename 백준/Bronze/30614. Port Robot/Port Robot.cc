#include <iostream>
#include <stack>
using namespace std;


int main() {
	int n;
	string str;
	cin >> n >> str;

	int sLen = str.length();
	stack<char> stk;
	for (int i = 0; i < n; ++i)
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			stk.emplace(str[i]);
		}
		else
		{
			if (!stk.empty() && (stk.top() == str[i] + ('a' - 'A')))
				stk.pop();
			else
			{
				cout << 0;
				return 0;
			}
		}
	}
	cout << (stk.empty() ? 1 : 0);
}