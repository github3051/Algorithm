#include <iostream>
#include <cmath> // round() 사용
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, a, b;
    while (cin >> m >> a >> b)
    {
        if (m == 0 && a == 0 && b == 0)
        {
            break;
        }

        // 초 단위 시간 계산
        double sec = m * 3600.0 / a - m * 3600.0 / b;

        // 반올림 적용
        int totalSeconds = round(sec);
        int hours = totalSeconds / 3600;  // 최소 자리로 나타남
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        // 시는 최소 자리로, 분/초는 두 자리로 출력
        cout << hours << ':' << (minutes < 10 ? "0" : "") << minutes << ':' << (seconds < 10 ? "0" : "") << seconds << '\n';
    }
}
