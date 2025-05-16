#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int p, q;
	cin >> p >> q;
	vector<int> pVec;
	vector<int> qVec;

	for (int i = 1; i <= p; ++i)
	{
		if (p % i == 0)
		{
			pVec.emplace_back(i);
		}
	}

	for (int i = 1; i <= q; ++i)
	{
		if (q % i == 0)
		{
			qVec.emplace_back(i);
		}
	}

	int pLen = pVec.size();
	int qLen = qVec.size();

	for (int i = 0; i < pLen; ++i)
	{
		for (int j = 0; j < qLen; ++j)
		{
			cout << pVec[i] << ' ' << qVec[j] << '\n';
		}
	}
}