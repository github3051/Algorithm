#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        long long n, d; // 큰 수 대응
        cin >> n >> d;

        cout << "Case " << i << ": ";

        long long I = n / d; // 정수 부분
        long long N = n % d; // 분수 부분의 분자

        if (I == 0 && N == 0) {
            // 정수, 분수 모두 0
            cout << 0;
        }
        else if (I != 0 && N == 0) {
            // 정수만 있음
            cout << I;
        }
        else if (I == 0 && N != 0) {
            // 분수만 있음
            cout << N << "/" << d;
        }
        else {
            // 정수 + 분수
            cout << I << " " << N << "/" << d;
        }
        cout << "\n";
    }
}
