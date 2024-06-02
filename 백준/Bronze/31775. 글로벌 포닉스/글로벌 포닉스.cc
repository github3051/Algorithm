#include <iostream>
using namespace std;

int main()
{
    char switches = 0; // 0000 0000
    int nWords = 3;
    for(int i=0; i<nWords; ++i)
    {
        string str;
        cin >> str;
        if(str[0] == 'k')
        {
            switches |= 1 << 0;
        }
        else if(str[0] == 'l')
        {
            switches |= 1 << 1;
        }
        else if(str[0] == 'p')
        {
            switches |= 1 << 2;
        }
    }
    
    if( (switches & (1<<0)) && (switches & (1<<1)) && (switches & (1<<2)))
    {
        cout << "GLOBAL";
    }
    else
    {
        cout << "PONIX";
    }
}