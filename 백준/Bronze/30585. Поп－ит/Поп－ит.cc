#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int  columns, rows;
	cin >> columns >> rows;


	int one = 0, zero = 0;


	for (int i = 0; i < columns; ++i)
	{
		string strTmp;
		cin >> strTmp;

		for (int j = 0; j < rows; ++j)
		{
			if (strTmp[j] == '0')
			{
				zero += 1;
			}
			else if (strTmp[j] == '1')
			{
				one += 1;
			}
		}
	}

	cout << (zero > one ? one : zero);
}