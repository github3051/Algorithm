#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<bool>> seat(10, vector<bool>(20, false));
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		char row;
		int col;
		cin >> row >> col;
		seat[row - 'A'][col - 1] = true;
	}

	for (const vector<vector<bool>>::iterator::value_type arr : seat)
	{
		for (const vector<bool>::iterator::value_type elem : arr)
		{
			if (elem == false)
			{
				cout << '.';
			}
			else
			{
				cout << 'o';
			}
		}
		cout << '\n';
	}
}