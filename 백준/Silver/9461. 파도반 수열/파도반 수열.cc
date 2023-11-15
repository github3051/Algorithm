#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;

	long long sequence[101] = { 0,1,1,1,2,2 };
	for (int i = 6; i < 101; i++)
		sequence[i] = sequence[i - 5] + sequence[i - 1];
	
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		cout << sequence[N] << "\n";
	}

	return 0;
}