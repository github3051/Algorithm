#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int len;
    string str;
    cin >> len >> str;
    
    int ns = 0,ew = 0;
    for(int i=0; i<len; ++i)
    {
        if(str[i] == 'N')
        {
            ns += 1;
        }
        else if(str[i] == 'S')
        {
            ns -= 1;
        }
        else if(str[i] == 'E')
        {
            ew += 1;
        }
        else if(str[i] == 'W')
        {
            ew -= 1;
        }
    }
    
    cout << abs(ns) + abs(ew) ;
}