// 평균과 기댓값은 기본적으로 다른 개념이지만, 연속된 기록들 중 하나를 '균일하게' 뽑기 때문에 결국 평균과 기댓값이 같아진다.
// 즉, n != 0 이라면 어느경우에라도 답은 1.00
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        int tmp;
        cin >> tmp;
    }

    if (n == 0)
    {
        cout << "divide by zero";
    }
    else
    {
        cout << fixed << setprecision(2);
        cout << 1.00;
    }
}