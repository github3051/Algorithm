#include <iostream>
#include <bitset>
using namespace std;

// 시계방향, 0은 시작점
int dx[] = { 0,1,0,-1 };
int dy[] = { 0,0,-1,0 };

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int x, y, r;
	cin >> x >> y >> r;

	int topLeftX = x - r;
	int topLeftY = y + r;

	for (int i = 0; i < 4; ++i)
	{
		topLeftX += 2 * r * dx[i];
		topLeftY += 2 * r * dy[i];
		cout << topLeftX << ' ' << topLeftY << '\n';
	}

	// -8 11, 2 11 , 2 1, -8 1
	return 0;
}