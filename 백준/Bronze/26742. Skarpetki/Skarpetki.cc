#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int sLen = str.length();
    int b = 0, c = 0;
    for(int i=0; i<sLen; ++i)
    {
        if(str[i] == 'B')
        {
            b += 1;
        }
        else if(str[i] == 'C')
        {
            c += 1;
        }
    }
    
    cout << b/2 + c/2;
}
