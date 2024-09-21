#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int score1 = 0, score2 = 0;
	int o, t, tr;
	cin >> o >> t >> tr;
	score1 = o + 2 * t + 3 * tr;

	cin >> o >> t >> tr;
	score2 = o + 2 * t + 3 * tr;

	cout << (score1 > score2 ? 1 : (score1 < score2 ? 2 : 0));
}