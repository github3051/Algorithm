#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ans = 1;
    while(true)
    {
        if(n == 1)
        {
            cout << ans;
            return 0;
        }
        
        if(n%2)
        {
            n = 3*n + 1;
        }
        else
        {
            n /= 2;
        }
        
        ans += 1;
    }
}