#include <iostream>
using namespace std;

int main()
{
	int n, scoreLeft, scoreRight;
	cin >> n >> scoreLeft >> scoreRight;
	for (int i = 0; i < n-1; ++i)
	{ 
		int leftTmp, rightTmp;
		cin >> leftTmp >> rightTmp;
		if(scoreLeft <= leftTmp)
		{
			scoreLeft = leftTmp;
		}
		else
		{
			cout << "no";
			return 0;
		}

		if (scoreRight <= rightTmp)
		{
			scoreRight = rightTmp;
		}
		else
		{
			cout << "no";
			return 0;
		}
	}

	cout << "yes";
}