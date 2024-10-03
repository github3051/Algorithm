#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int max = -1'000'000, min = 1'000'000;
        for(int i=0; i<n; ++i)
        {
            int tmp;
            cin >> tmp;
            
            if(tmp > max)
            {
                max = tmp;
            }
            
            if(tmp < min)
            {
                min = tmp;
            }
        }
        
        cout << min << ' ' << max << '\n';
    }
}