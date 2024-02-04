#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, string> strMap = { {"CU","see you"},{":-)","I’m happy"},{ ":-(","I'm unhappy"},{";-)","wink"},{":-P","stick out my tongue"},{"(~.~)","sleepy"},{"TA","totally awesome"},{"CCC","Canadian Computing Competition"},{"CUZ","because"},{"TY","thank-you"},{"YW","you're welcome"},{"TTYL","talk to you later"}};

	string str;
	while (cin >> str)
	{
		if (strMap.find(str) != strMap.end())
		{
			cout << strMap[str] << '\n';
		}
		else
		{
			cout << str << '\n';
		}
	}
}