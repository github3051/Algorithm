#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    long double x = (long double)a * (long double)b / (long double)c;

    cout << fixed << setprecision(10) << x << '\n';
    return 0;
}
