#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> ans = { 1, 0, 0, 2 };  // 초기 위치 설정

    for (char c : str) {
        int tmp;
        switch (c) {
        case 'A': swap(ans[0], ans[1]); break;
        case 'B': swap(ans[0], ans[2]); break;
        case 'C': swap(ans[0], ans[3]); break;
        case 'D': swap(ans[1], ans[2]); break;
        case 'E': swap(ans[1], ans[3]); break;
        case 'F': swap(ans[2], ans[3]); break;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (ans[i] == 1) cout << i + 1 << '\n';
    }

    for (int i = 0; i < 4; ++i) {
        if (ans[i] == 2) cout << i + 1;
    }

    return 0;
}