#include <iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    
    int ans = 0;
    for(int i=0; i<n; ++i)
    {
        if(str[i] == 'j' || str[i] == 'i')
        {
            ans += 2;
        }
        else if(str[i] == 'o')
        {
            ans += 1;
        }
    }
    
    cout << ans;
}