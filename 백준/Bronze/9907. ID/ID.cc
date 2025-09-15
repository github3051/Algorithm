#include <iostream>
#include <vector>
using namespace std;

int main() {
	string str;
	cin >> str;
	vector<int> weight = { 2,7,6,5,4,3,2 };
	vector<char> ans = { 'J','A','B','C','D','E','F','G','H','I','Z' };
	int sLen = str.length();
	int sum = 0;
	for (int i = 0; i < sLen; ++i)
	{
		sum += (str[i] - '0') * weight[i];
	}
	cout << ans[sum % 11];
}