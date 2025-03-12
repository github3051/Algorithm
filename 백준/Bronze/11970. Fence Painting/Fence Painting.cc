#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // 두 구간이 겹치는 경우와 겹치지 않는 경우를 고려한 코드
    if (b < c || d < a) {
        // 겹치지 않는 경우
        cout << (b - a) + (d - c);
    } else {
        // 겹치는 경우
        int start = min(a, c);
        int end = max(b, d);
        cout << end - start;
    }
}