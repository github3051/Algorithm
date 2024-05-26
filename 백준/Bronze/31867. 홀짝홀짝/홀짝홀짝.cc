#include <iostream>
using namespace std;

int main()
{
    int n;
    string k;
    
    cin >> n >> k;
    
    int len = k.length();
    int ans = 0; // 짝수면 +, 홀수면 -
    for(int i=0; i<len; ++i)
    {
        if( (k[i]-'0')%2 == 0)
        {
            ans += 1;
        }
        else
        {
            ans -= 1;
        }
    }
    
    if(ans == 0)
    {
        cout << -1;
    }
    else if(ans > 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
}