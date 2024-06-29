#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int vSize = 6;
    vector<int> vec(vSize,0);
    for(int i=0; i<vSize; ++i)
    {
        cin >> vec[i];
    }
    
    int t, p;
    cin >> t >> p;
    
    int ans = 0;
    for(int i=0; i<vSize; ++i)
    {
        ans += (vec[i]/t + (vec[i]%t == 0 ? 0 : 1));
    }
    
    cout << ans << '\n' << n/p << ' ' << n%p;
}