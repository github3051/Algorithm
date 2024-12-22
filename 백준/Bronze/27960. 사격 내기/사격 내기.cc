#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> score = {512,256,128,64,32,16,8,4,2,1};
	int len = score.size();
	int scoreA, scoreB;
	cin >> scoreA >> scoreB;


	int ans = 0;
	for (int i = 0; i < len; ++i)
	{
		bool a = false;
		bool b = false;
		if (scoreA - score[i] >= 0)
		{
			scoreA -= score[i];
			a = true;
		}

		if (scoreB - score[i] >= 0)
		{
			scoreB -= score[i];
			b = true;
		}

		if ((a && !b) || (!a && b))
		{
			ans += score[i];
		}
	}

	cout << ans;
}