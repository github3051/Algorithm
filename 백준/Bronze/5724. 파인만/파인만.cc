#include <iostream>
using namespace std;

int main()
{
    int arr[101];
    
    while(true)
    {
        int n;
        cin >> n;
        
        if(n == 0)
        {
            break;
        }
        
        int ans = 0;
        for(int i=1; i<=n; ++i)
        {
            ans += i*i;
        }
        cout << ans << '\n';
    }
}