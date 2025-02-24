#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int height, weight;
		cin >> height >>  weight;
		double bmi = (double)weight*100*100 / (height*height);
		if (height < 140.1)
		{
			cout << 6;
		}
		else if (height < 146)
		{
			cout << 5;
		}
		else if (height < 159)
		{
			cout << 4;
		}
		else if (height < 161)
		{
			if (bmi >= 16 && bmi < 35)
			{
				cout << 3;
			}
			else if (bmi < 16 || bmi >= 35)
			{
				cout << 4;
			}
		}
		else if (height < 204)
		{
			if (bmi < 25 && bmi >= 20)
			{
				cout << 1;
			}
			else if ((bmi >= 18.5 && bmi < 20) || (bmi >= 25 && bmi < 30))
			{
				cout << 2;
			}
			else if ((bmi >= 16 && bmi < 18.5) || (bmi >= 30 && bmi < 35))
			{
				cout << 3;
			}
			else if (bmi < 16 || bmi >= 35)
			{
				cout << 4;
			}
		}
		else
		{
			cout << 4;
		}
		cout << '\n';
	}
}