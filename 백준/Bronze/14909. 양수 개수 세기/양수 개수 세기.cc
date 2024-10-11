#include <iostream>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    while(cin >> n)
    {
        ans += (n > 0 ? 1 : 0);
    }
    cout << ans;
}