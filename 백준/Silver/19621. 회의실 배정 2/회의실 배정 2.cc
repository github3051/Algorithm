#include <iostream>
#include <vector>

using namespace std;

int ans;

struct Meeting
{
	int start;
	int end;
	int numOfpeople;
};

int Recursion(vector<Meeting>& vec, const int& vecSize, const int& startIdx)
{
	int maxAns = vec[startIdx].numOfpeople; // 현재 미팅에서의 인원으로 초기화
	for (int i = 0; i < vecSize; ++i)
	{
		if (vec[startIdx].end <= vec[i].start) // 현재 미팅이 끝나고 다음 미팅이 시작되는지 확인
		{
			// 다음 미팅으로 이동하면서 그 미팅을 포함한 최대 인원수를 계산
			int tmpAns = Recursion(vec, vecSize, i);
			maxAns = max(maxAns, vec[startIdx].numOfpeople + tmpAns); // 최대값 업데이트
		}
	}
	return maxAns; // 이 경로에서의 최대 인원수 반환
}

int main()
{
	int n;
	cin >> n;
	vector<Meeting> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i].start >> vec[i].end >> vec[i].numOfpeople;
	}

	int ans = 0; // 최대값을 저장할 변수 초기화
	for (int i = 0; i < n; ++i)
	{
		ans = max(ans, Recursion(vec, n, i)); // 각 미팅을 시작점으로 하는 최대값을 계산
	}

	cout << ans; // 계산된 최대값 출력
}