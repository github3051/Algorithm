// 넓이로 계산하면 안됨. 삼각형을 자를 수 없기 때문.
// 기준을 b에서 1로 바꾸는게 계산이 편함. 그래서 b는 b로 나눠서 1이 되고, a는 b로 나누는 것.
// a를 b로 나눴을 때, 딱 떨어지면 그대로 계산하면 됨(4/2 = 2)
// 하지만 딱 떨어지지 않으면, 완벽하게 가려지지 않으므로 한배수를 더 추가해서 계산하면 가려짐 (5/2 -> 정확히 계산하면 b보다 2.5배 더 길지만, 그냥 3배 길다고 생각하면 편함)
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int remainder = (a % b == 0 ? 0 : 1);
		cout << (a / b + remainder) * (a / b + remainder) << '\n';
	}
}