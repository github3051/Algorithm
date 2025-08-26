#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double ans = 0.0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        ans += (x == 0 ? 2.0 : 1.0 / x);
    }
    cout << fixed << setprecision(6) << ans << '\n';
    return 0;
}