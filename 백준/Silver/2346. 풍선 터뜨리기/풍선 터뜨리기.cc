#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    cin >> n;

    list<pair<int, int>> balloons;
    for (int i = 1; i <= n; ++i) {
        int move;
        cin >> move;
        balloons.emplace_back(i, move);
    }

    auto it = balloons.begin();

    while (!balloons.empty()) {
        int idx = it->first;
        int move = it->second;

        cout << idx << " ";

        // 삭제 후, 다음 원소 반복자 반환
        it = balloons.erase(it);
        if (it == balloons.end()) it = balloons.begin(); // 중요!

        if (balloons.empty()) break;

        // 이동: 현재 풍선 제외 후 이동하므로 move-1
        if (move > 0) {
            for (int i = 0; i < move - 1; ++i) {
                ++it;
                if (it == balloons.end()) it = balloons.begin();
            }
        } else {
            for (int i = 0; i < -move; ++i) {
                if (it == balloons.begin()) it = balloons.end();
                --it;
            }
        }
    }

    return 0;
}