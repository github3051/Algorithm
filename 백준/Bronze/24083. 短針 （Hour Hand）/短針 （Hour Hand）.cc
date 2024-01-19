#include <iostream>
using namespace std;


int main()
{
    int a, b, ans;
    cin >> a >> b;
    ans = (a + b) % 12;
    if(ans == 0)
    {
        ans = 12;
    }
    cout << ans;
}