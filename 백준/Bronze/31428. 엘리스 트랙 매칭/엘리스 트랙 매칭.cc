#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<char> vec(n);
    for(int i=0; i<n; ++i)
    {
        cin >> vec[i];
    }
    
    char c;
    cin >> c;
    
    
    int ans = 0;
    for(int i=0; i<n; ++i)
    {
        if(vec[i] == c)
        {
            ans += 1;
        }
    }
    
    cout << ans;
}