#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}

	// 왼쪽과 오른쪽의 최대값을 저장할 배열 생성
	vector<int> leftMax(n), rightMax(n);

	// 첫 번째 위치의 왼쪽 최대값과 마지막 위치의 오른쪽 최대값 초기화
	leftMax[0] = vec[0];
	rightMax[n - 1] = vec[n - 1];

	// 각 위치에서의 왼쪽 최대값 계산
	for (int i = 1; i < n; ++i)
	{
		leftMax[i] = max(leftMax[i - 1], vec[i]);
	}

	// 각 위치에서의 오른쪽 최대값 계산
	for (int i = n - 2; i >= 0; --i)
	{
		rightMax[i] = max(rightMax[i + 1], vec[i]);
	}

	// 결과 출력
	for (int i = 0; i < n; ++i)
	{
		cout << leftMax[i] << ' ' << rightMax[i] << '\n';
	}

	return 0;
}