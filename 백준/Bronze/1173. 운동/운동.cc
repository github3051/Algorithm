#include <iostream>
using namespace std;

int main()
{
	int targetTime, start, limit, increase, rest;
	cin >> targetTime >> start >> limit >> increase >> rest;

	int currPulse = start;
	int exerTime = 0;
	int ansTime = 0;

	// 운동을 할 수 없는 경우
	if (start == limit || start + increase > limit)
	{
		cout << -1;
		return 0;
	}

	while (exerTime != targetTime)
	{
		if (currPulse + increase <= limit)
		{
			currPulse += increase;
			exerTime += 1;
		}
		else
		{
			currPulse =(currPulse - rest < start ? start : currPulse - rest);
		}
		ansTime += 1;
	}
	cout << ansTime;
}