#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string str;
	cin >> n >> str;
	int len = str.length();
	int sec = 0, data = 0;

	for (int i = 0; ;)
	{
		if (str[i] == 's')
		{
			sec += 1;
			i += 8;
		}
		else if (str[i] == 'b')
		{
			data += 1;
			i += 7;
		}

		if (i >= len)
		{
			break;
		}
	}

	if (sec == data)
	{
		cout << "bigdata? security!";
	}
	else if (sec > data)
	{
		cout << "security!";
	}
	else
	{
		cout << "bigdata?";
	}
}