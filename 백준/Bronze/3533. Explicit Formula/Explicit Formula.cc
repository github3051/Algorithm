#include <iostream>
#include <vector>
using namespace std;

int f(const vector<int>& x) {
    int count = 0;

    // 2개 조합
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (x[i] || x[j]) count++;
        }
    }

    // 3개 조합
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            for (int k = j + 1; k < 10; ++k) {
                if (x[i] || x[j] || x[k]) count++;
            }
        }
    }

    // 홀수면 1, 짝수면 0
    return count % 2;
}

int main() {
    vector<int> x(10);
    for (int i = 0; i < 10; ++i) {
        cin >> x[i];
    }
    cout << f(x) << endl;
    return 0;
}