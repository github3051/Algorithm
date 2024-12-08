#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec(9);
	int sum = 0;
	for (int i = 0; i < 9; ++i)
	{
		cin >> vec[i];
		sum += vec[i];
	}

	if (vec[0] > 100 || vec[1] > 100 || vec[3] > 200 || vec[2] > 200 || vec[4] > 300 || vec[5] > 300 || vec[6] > 400 || vec[7] > 400 || vec[8] > 500)
	{
		cout << "hacker";
	}
	else if (sum >= 100)
	{
		cout << "draw";
	}
	else
	{
		cout << "none";
	}
}