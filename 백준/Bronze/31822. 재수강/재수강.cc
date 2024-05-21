#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int n;
    cin >> n;
    
    int ans = 0;
    for(int i=0; i<n; ++i)
    {
        string stmp;
        cin >> stmp;
        if(str.substr(0,5) == stmp.substr(0,5))
        {
            ans += 1;
        }
    }
    cout << ans;
}