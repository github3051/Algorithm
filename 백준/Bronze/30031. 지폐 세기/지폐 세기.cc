#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int tmp;
    int dummy;
    int ans = 0;
    while(n--)
    {
        cin >> tmp >> dummy;
        if(tmp == 136)
        {
            ans += 1000;
        }
        else if(tmp == 142)
        {
            ans += 5000;
        }
        else if(tmp == 148)
        {
            ans += 10000;
        }
        else if(tmp == 154)
        {
            ans += 50000;
        }
    }
    cout << ans;
}