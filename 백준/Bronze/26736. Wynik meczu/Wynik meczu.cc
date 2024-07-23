#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    string str;
    cin >> str;
    
    int sLen = str.length();
    for(int i=0; i<sLen; ++i)
    {
        if(str[i] == 'A')
        {
            a += 1;
        }
        else if(str[i] == 'B')
        {
            b += 1;
        }
    }
    
    cout << a << " : " << b;
}