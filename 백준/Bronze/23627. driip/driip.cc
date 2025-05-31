#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int sLen = str.length();
	if (sLen >= 5)
	{
		cout << (str.substr(sLen - 5, 5) == "driip" ? "cute" : "not cute");
	}
	else
	{
		cout << "not cute";
	}
	
}