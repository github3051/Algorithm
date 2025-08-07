#include <iostream>
using namespace std;

int main() {
    long long k, d;
    cin >> k >> d;

    long long total = 0;
    long long curr = k;
    int ans = 0;

    while (total + curr <= d) {
        total += curr;
        curr *= 2;
        ans++;
    }

    cout << ans << endl;
    return 0;
}