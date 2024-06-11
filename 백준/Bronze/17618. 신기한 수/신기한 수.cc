#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ans = 0;
    if(n < 10)
    {
        ans = n;
    }
    else
    {
        ans = 9;
        for(int i=10; i<=n; ++i)
        {
            int tmp = i;
            int divider = 0;
            while(tmp > 0)
            {
                divider += tmp%10;
                tmp /= 10;
            }
            
            if(i%divider == 0)
            {
                ans += 1;
            }
        }
    }
    cout << ans;
    
}