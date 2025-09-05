#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<char> useLetter = { 'I','O','S','H','Z','N','X' };
	int vSize = useLetter.size();
	string str;
	cin >> str;
	int sLen = str.length();

	for (int i = 0; i < sLen; ++i)
	{
		bool ans = false;
		for (const auto& elem : useLetter)
			if (elem == str[i])
				ans = true;

		if (ans == false)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}