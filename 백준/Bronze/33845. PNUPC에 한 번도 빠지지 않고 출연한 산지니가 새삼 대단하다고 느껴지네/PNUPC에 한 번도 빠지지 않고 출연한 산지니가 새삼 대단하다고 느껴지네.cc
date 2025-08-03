#include <iostream>
#include <vector>
using namespace std;


int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	int sLen1 = str1.length();
	int sLen2 = str2.length();

	vector<bool> outputIdx(sLen2, true);

	for (int i = 0; i < sLen1; ++i)
	{
		for (int j = 0; j < sLen2; ++j)
		{
			if (str2[j] == str1[i])
				outputIdx[j] = false;
		}
	}

	for (int i = 0; i < sLen2; ++i)
	{
		if (outputIdx[i] == true)
			cout << str2[i];
	}
}