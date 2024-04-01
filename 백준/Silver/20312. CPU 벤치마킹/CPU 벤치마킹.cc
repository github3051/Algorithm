// n이 500'000이면 아무리 기를써도 2중 for문으로는 절대 1초 안에 답이 안나온다
// 즉, 숫자 사이의 관계를 유추해서 for문 하나로 계산이 가능한 점화식을 유추하는 방법을 '무조건' 찾아야된다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n, 0);
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> vec[i];
	}

	long long tmp = vec[0];
	long long ans = vec[0];
	for (int i = 1; i < n - 1; ++i)
	{
		tmp = ((tmp + 1) * vec[i]) % 1'000'000'007;
		ans = (ans + tmp) % 1'000'000'007;
	}

	cout << ans;
}