#include <iostream>
using namespace std;

bool CheckPos(const int& x1, const int& y1, const int& x2, const int& y2, const int& cx, const int& cy, const int& rad)
{
	int start = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
	int dest = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
	int sqRad = rad * rad;
	if ((start < sqRad && dest < sqRad) || (start > sqRad && dest > sqRad))
		return false;
	else
		return true;
}


int main()
{
	int testCases;
	cin >> testCases;

	while (testCases--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int nCircle;
		cin >> nCircle;

		int cnt = 0;
		for (int i = 0; i < nCircle; ++i)
		{
			int cx, cy, rad;
			cin >> cx >> cy >> rad;
			// 함수
			if (CheckPos(x1,y1,x2,y2,cx,cy,rad))
				cnt += 1;
		}

		cout << cnt << '\n';
	}
}