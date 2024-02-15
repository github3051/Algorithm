#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        string str;
        cin >> str;
        int len = str.length();
        int ans = 0;
        for(int i=0; i<len; ++i)
        {
            if(str[i] == 'D')
            {
                break;
            }
            ans += 1;
        }
        
        cout << ans << '\n';
    }
}