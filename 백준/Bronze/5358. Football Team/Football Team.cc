#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	
	while (getline(cin, str))
	{
		for (char& elem : str)
		{
			if (elem == 'i')
			{
				elem = 'e';
			}
			else if (elem == 'e')
			{
				elem = 'i';
			}
			else if (elem == 'I')
			{
				elem = 'E';
			}
			else if (elem == 'E')
			{
				elem = 'I';
			}
		}

		cout << str << '\n';
	}
}