#include <iostream>
using namespace std;

int main()
{
	string str;
	bool isFind = false;
	for (int i = 1; i <= 5; ++i)
	{
		cin >> str;
		if (str.find("FBI") != string::npos)
		{
			cout << i << ' ';
			isFind = true;
		}
	}

	if (!isFind)
	{
		cout << "HE GOT AWAY!";
	}
}