#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    int ans = 0;
    while(testCases--)
    {
        string str;
        cin >> str;
        
        
        if(str.find("01") != string::npos || str.find("OI") != string::npos)
        {
            ans += 1;
        }
    }
    cout << ans;
}