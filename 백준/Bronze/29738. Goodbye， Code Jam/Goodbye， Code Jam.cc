#include <iostream>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;

	for (int num = 1; num <= testCases; ++num)
	{
		int rank;
		cin >> rank;

		string round;

		if (rank <= 25)
		{
			round = "World Finals";
		}
		else if (rank <= 1000)
		{
			round = "Round 3";
		}
		else if (rank <= 4500)
		{
			round = "Round 2";
		}
		else
		{
			round = "Round 1";
		}

		cout << "Case #" << num << ": " << round << '\n';
	}
}