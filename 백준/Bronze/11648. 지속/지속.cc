#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int sLen = str.length();
    int ans = 0;

    while (sLen != 1)
    {
        int sTmp = 1;
        for (int i = 0; i < sLen; ++i)
        {
            sTmp *= (str[i] - '0');
        }
        str = to_string(sTmp);
        sLen = str.length();
        ans += 1;
    }
    cout << ans;
}