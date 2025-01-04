// 시 분 초 단위로 출력해야되고, 빈 공간은 0으로 넣어야 함.

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int curr[3];
    int teach[3];
    scanf("%d:%d:%d", curr, curr + 1, curr + 2);
    scanf("%d:%d:%d", teach, teach + 1, teach + 2);
    int cTime = 3600 * curr[0] + 60 * curr[1] + curr[2];
    int tTime = 3600 * teach[0] + 60 * teach[1] + teach[2];
    if (cTime >= tTime)
    {
        tTime += 24 * 3600;
    }

    int ans = tTime - cTime;
    printf("%02d:%02d:%02d", ans / 3600, (ans % 3600) / 60, ans % 60);
}