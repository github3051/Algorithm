#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int stress = 0;
    int ans = 0;
    for(int i=0; i<n; ++i)
    {
        int a;
        cin >> a;
        stress += a;
        if(stress >= m)
        {
            ans += 1;
        }
        else if(stress < 0)
        {
            stress = 0;
        }
    }
    cout << ans;
}