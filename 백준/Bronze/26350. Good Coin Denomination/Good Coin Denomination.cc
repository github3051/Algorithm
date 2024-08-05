#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int len;
		cin >> len;

		vector<int> vec(len);
		bool isContinuous = true;
		
		for (int i = 0; i < len; ++i)
		{
			cin >> vec[i];
		}


		for (int i = 1; i < len; ++i)
		{
			if (vec[i] < vec[i - 1] * 2)
			{
				isContinuous = false;
			}
		}

		cout << "Denominations: ";
		for (const auto& elem : vec)
		{
			cout << elem << ' ';
		}
		if (isContinuous)
		{
			cout << "\nGood coin denominations!\n\n";
		}
		else
		{
			cout << "\nBad coin denominations!\n\n";
		}
	}
}