#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int  columns, rows;
	cin >> columns >> rows;

	vector<string> vec;
	for (int i = 0; i < columns; ++i)
	{
		string strTmp;
		cin >> strTmp;
		vec.emplace_back(strTmp);
	}

	int one = 0, zero = 0;

	for (int i = 0; i < columns; ++i)
	{
		for (int j = 0; j < rows; ++j)
		{
			if (vec[i][j] == '0')
			{
				zero += 1;
			}
			else if(vec[i][j] == '1')
			{
				one += 1;
			}
		}
	}

	cout << (zero > one ? one : zero);
}