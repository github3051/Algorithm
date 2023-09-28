#include <iostream>
#include <vector>
#include <string> //C++ style geline
using namespace std;

int main()
{
	int n;
	cin >> n;

	string str;
	vector<string> pledge = { "Never gonna give you up","Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you","Never gonna stop" };
	bool chk = false;
	bool totalChk = true;
	cin.ignore();
	while (n--)
	{
		getline(cin,str);
		for (const vector<string>::value_type& elem : pledge)
		{
			if (elem == str)
			{
				chk = true;
				break;
			}
		}

		if (!chk)
		{
			totalChk = false;
			break;
		}

		chk = false;
	}

	if (totalChk)
	{
		std::cout << "No\n";
	}
	else
	{
		std::cout << "Yes\n";
	}
}