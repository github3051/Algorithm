#include <iostream>
#include <vector>
using namespace std;

struct Score
{
	string score;
	int penalty;
};

int main()
{
	vector<Score> sVec = { {"ABCDEFGHJLM",925},{"ACEFGHILM",648},{"ACEFGHILM",696},{"ABCEFGHLM",831},{"ACEFGHLM",389}, {"ACEFGHLM",560},{"ACEFGHLM",629},{"ACEFGHLM",879},{"ACEFGHLM",930},{"ABCFGHLM",987} };

	int n;
	cin >> n;
	
	int sLen = sVec[n - 1].score.length();
    cout << sLen << '\n';
	for (int i = 0; i < sLen; ++i)
	{
		cout << sVec[n - 1].score[i] << ' ';
	}
}