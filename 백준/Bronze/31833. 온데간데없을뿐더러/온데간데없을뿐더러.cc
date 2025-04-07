#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	string str1 = "";
	string str2 = "";
	for (int i = 0; i < n; ++i)
	{
		string strTmp;
		cin >> strTmp;
		str1 += strTmp;
	}

	for (int i = 0; i < n; ++i)
	{
		string strTmp;
		cin >> strTmp;
		str2 += strTmp;
	}

	int sLen1 = str1.length();
	int sLen2 = str2.length();


	string ansStr;
	if (sLen1 == sLen2)
	{
		for (int i = 0; i < sLen1; ++i)
		{
			if (str1[i] < str2[i])
			{
				ansStr = str1;
				break;
			}
			else if(str1[i] > str2[i])
			{
				ansStr = str2;
				break;
			}
			else // 두 수가 같다면 아무거나
			{
				ansStr = str1; 
			}
		}
	}
	else
	{
		ansStr = (sLen1 < sLen2 ? str1 : str2);
	}

	for (const auto& elem : ansStr)
	{
		cout << elem;
	}
}