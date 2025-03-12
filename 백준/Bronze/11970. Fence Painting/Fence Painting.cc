#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // 구간 [a, b]와 [c, d]의 길이 계산
    int lengthA = b - a;
    int lengthB = d - c;
    int overlap = max(0, min(b, d) - max(a, c));

    // 총 길이 계산
    int totalLength;
    if (overlap > 0) {
        // 겹치는 경우
        totalLength = lengthA + lengthB - overlap;
    } else {
        // 겹치지 않는 경우
        totalLength = lengthA + lengthB;
    }

    cout << totalLength;
}