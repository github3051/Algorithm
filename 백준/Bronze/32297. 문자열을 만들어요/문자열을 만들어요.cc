#include <iostream>
using namespace std;

int main()
{
	int n;
	string str;
	cin >> n >> str;

	cout << (str.find("gori") == string::npos ? "NO" : "YES");
}