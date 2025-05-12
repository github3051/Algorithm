#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		string str;
		getline(cin, str);
		reverse(str.begin(),str.end());
		cout << str << '\n';
	}
}