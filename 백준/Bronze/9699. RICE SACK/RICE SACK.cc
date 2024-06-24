#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; ++i)
    {
        int ans = 0;
        for(int j=0; j<5; ++j)
        {
            int tmp;
            cin >> tmp;
            if(tmp > ans)
            {
                ans = tmp;
            }
        }
        
        cout << "Case #" << i << ": " << ans << '\n';
    }
}