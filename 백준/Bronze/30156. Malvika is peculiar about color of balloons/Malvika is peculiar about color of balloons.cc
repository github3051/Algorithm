#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        
        int a = 0, b = 0;
        int sLen = str.length();
        for(int i=0; i<sLen; ++i)
        {
            if(str[i] == 'a')
            {
                a += 1;
            }
            else if(str[i] == 'b')
            {
                b += 1;
            }
        }
        
        cout << (a > b ? b : a) << '\n';
    }
}