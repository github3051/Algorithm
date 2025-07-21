#include <iostream>
using namespace std;

int main()
{
    int sLen;
    string str1, str2;
    cin >> sLen >> str1 >> str2;
    int ans = 0;
    for(int i=0; i<sLen; ++i)
    {
        if(str1[i] == str2[i])
            ans += 1;
    }
    cout << ans;
}