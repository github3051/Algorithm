#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, dest;
        cin >> n >> dest;
        
        int ans = 0;
        for(int i=0; i<n; ++i)
        {
            int v,f,c;
            cin >> v >> f >> c;
            if(v*f/c >= dest)
            {
                ans += 1;
            }
        }
        
        cout << ans << '\n';
    }
}