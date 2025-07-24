#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, int> memo;  // long long 사용! 수가 커질 수 있어서

int collatz(long long n) {
    if (n == 1) return 0;

    // 메모이제이션 되어 있으면 바로 반환
    if (memo.count(n)) return memo[n];

    int result;
    if (n % 2 == 0)
        result = 1 + collatz(n / 2);
    else
        result = 1 + collatz(n * 3 + 1);

    memo[n] = result;  // 결과 저장
    return result;
}

int main() {
    long long n;
    cin >> n;

    int score = collatz(n);
    cout << score << '\n';
    return 0;
}