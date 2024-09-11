#include <iostream>
using namespace std;

int main()
{
    int n,sLen;
    cin >> n >> sLen;
    string str;
    
    int ans=0;
    for(int i=0; i<n; ++i)
    {
        cin >> str;
        for(int j=0; j<sLen; ++j)
        {
            if(str[j] == '+')
            {
                ans += 1;
                break;
            }
        }
    }
    
    cout << ans;
}

