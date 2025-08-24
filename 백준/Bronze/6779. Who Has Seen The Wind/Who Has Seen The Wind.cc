#include <iostream>
using namespace std;

int main()
{
	int h, M;
	cin >> h >> M;
	int ans = 0;
	for (int i = 1; i <= M; ++i)
	{
		ans = -6 * i * i * i * i + h * i * i * i + 2 * i * i + i;
		if (ans <= 0)
		{
			cout << "The balloon first touches ground at hour: " << i;
			return 0;
		}
	}
	cout << "The balloon does not touch ground in the given time.";
	
}