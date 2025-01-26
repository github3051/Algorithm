#include <iostream>
using namespace std;

int main()
{
	int len;
	string str;
	cin >> len >> str;
	
	int equal = 0;
	int ansIdx = 0;
	for (int i = len - 1; i >= 0; --i)
	{
		if (str[i] == 's')
		{
			equal += 1;
		}
		else if (str[i] == 't')
		{
			equal -= 1;
		}

		if (equal == 0)
		{
			ansIdx = i;
		}
	}

	for (int i = ansIdx; i < len; ++i)
	{
		cout << str[i];
	}
}