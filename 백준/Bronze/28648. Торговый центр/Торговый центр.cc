#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 300;
    while(n--)
    {
        int start, time;
        cin >> start >> time;
        ans = (ans > start + time ? start+time : ans);
    }
    cout << ans;
}