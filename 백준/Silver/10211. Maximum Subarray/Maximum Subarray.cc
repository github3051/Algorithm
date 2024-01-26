#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        int n;
        cin >> n;
        
        int ans = -1'000'000;
        int input;
        int currMax = 0; // or prevMax
        
        for(int i=0; i<n; ++i)
        {
            cin >> input;
            
            currMax = max(currMax+input, input);
            ans = max(currMax, ans);
        }
        
        cout << ans << '\n';
    }
}