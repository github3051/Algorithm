#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << string(n + 2, '@') << '\n';

    for (int i = 0; i < n; ++i) {
        cout << '@' << string(n, ' ') << "@\n";
    }

    cout << string(n + 2, '@');
}