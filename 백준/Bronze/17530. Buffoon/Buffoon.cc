#include <iostream>
using namespace std;

int main()
{
	int n, carlos;
	cin >> n >> carlos;

	for (int i = 0; i < n - 1; ++i)
	{
		int otherCandidate;
		cin >> otherCandidate;
		if (otherCandidate > carlos)
		{
			cout << 'N';
			return 0;
		}
	}
	cout << 'S';
}