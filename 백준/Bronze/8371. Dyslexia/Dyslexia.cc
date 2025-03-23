#include <iostream>
using namespace std;

int main()
{
    int len;
    string str1,str2;
    cin >> len >> str1 >> str2;
    
    int ans = 0;
    for(int i=0; i<len; ++i)
    {
        if(str1[i] != str2[i])
        {
            ans += 1;
        }
    }
    cout << ans;
}