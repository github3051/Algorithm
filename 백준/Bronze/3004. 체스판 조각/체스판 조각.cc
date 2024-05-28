#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ans = 2;
    int curr = 2;
    for(int i = 2; i<=n; ++i)
    {
        ans += curr;
        if(i%2 == 1)
        {
            curr += 1;
        }
    }
    cout << ans;
}