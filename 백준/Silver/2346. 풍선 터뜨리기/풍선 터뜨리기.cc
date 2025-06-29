#include <iostream>
#include <deque>

int main() {
    int N;
    std::cin >> N;

    std::deque<std::pair<int, int>> dq;

    for (int i = 1; i <= N; ++i) {
        int move;
        std::cin >> move;
        dq.emplace_back(i, move); // (풍선 번호, 이동 값)
    }

    while (!dq.empty()) {
        auto& p = dq.front();
        int idx = p.first;
        int step = p.second;
        dq.pop_front();

        std::cout << idx << " ";

        if (dq.empty()) break;

        // 이동 수 보정
        if (step > 0) {
            for (int i = 0; i < step - 1; ++i) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            for (int i = 0; i < -step; ++i) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}