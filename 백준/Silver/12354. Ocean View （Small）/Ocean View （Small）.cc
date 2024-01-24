#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    for(int idx=1; idx <= testCases; ++idx)
    {
        int n;
        cin >> n;
        vector<int> vec(n,0);
        for(int i=0; i<n; ++i)
        {
            cin >> vec[i];
        }
        
        int cnt = 0;
        for(int i=0; i<n-1; ++i)
        {
            if(vec[i] >= vec[i+1])
            {
                cnt += 1;
            }
        }
        
        cout << "Case #" << idx << ": " << cnt << '\n';
    }
}