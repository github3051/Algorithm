#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int largestPrimeLessThanN(int n) {
    for (int i = n - 1; i >= 5; i--) {
        if (isPrime(i)) {
            return i;
        }
    }
    return -1; // 소수가 존재하지 않을 경우
}

int main()
{
	int n;
	cin >> n;
	vector<int> vec = { 1,2,3,4,5 };
    cout << n << '\n';
    if (n >= 6)
    {
        for (int i = 0; i < n - 6; ++i)
        {
            vec.push_back(i+6);
        }
        vec.push_back(largestPrimeLessThanN(1000));
    }

	for (const auto& elem : vec)
	{
		cout << elem << ' ';
	}
}