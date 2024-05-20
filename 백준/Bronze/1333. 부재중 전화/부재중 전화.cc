// 처음에는 전자신호 느낌으로 풀려고 했음. 
// 하지만 노래시작,벨시작 / 노래끝,벨끝 겹치는 경우에는 안된다는 조건이 붙으니까 위처럼 풀면 좀 이상해지는거같음
// 해서 2가지 경우만 있는 bool에서 여러 속성을 가질 수 있는 int로 선회

#include <iostream>
using namespace std;

int music[4001]; // 0 쉬는시간 / 1 노래 시작 / 2 중간 / 3 노래 끝
int ring[4001];  // 0 없음 / 1 벨 시작 / 2 중간(없음) / 3 벨 끝  // (1초만 울리기 때문에 중간은 없음)

int main()
{
	int n, l, d;
	cin >> n >> l >> d;
	int mTime = 0;
	int rTime = 0;
	for (int i = 0; i < n; ++i)
	{
		music[mTime] = 1;
		for (int j = mTime + 1; j < mTime + l; j++)
		{
			music[j] = 2;
		}
		music[mTime + l] = 3;
		mTime += l + 5;
	}

	while (true)
	{
		if (rTime > 4000)
		{
			break;
		}
		
		ring[rTime] = 1;
		ring[rTime+1] = 3;
		rTime += d;
	}
	
	for (int i = 0; i < 4000; ++i)
	{
		// 경우의 수 3개 : 쉬는시간, 벨 처음 + 음악 끝, 벨 끝 + 음악 처음
		if ( (music[i] == 0 && ring[i] != 0) || (music[i] == 1 && ring[i] == 3) || (music[i] == 3 && ring[i] == 1))
		{
			cout << i;
			return 0;
		}
	}
}