#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> recited(201, false); // 인덱스 1~200까지 사용
    int lastNumber = 0;

    // 숫자 입력 받기
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        recited[num] = true;
        if (num > lastNumber) lastNumber = num;
    }

    // 누락된 숫자 찾기
    bool allGood = true;
    for (int i = 1; i <= lastNumber; ++i) {
        if (!recited[i]) {
            cout << i << endl;
            allGood = false;
        }
    }

    if (allGood) {
        cout << "good job" << endl;
    }

    return 0;
}
