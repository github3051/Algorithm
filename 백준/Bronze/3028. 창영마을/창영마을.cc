#include <iostream>
using namespace std;

bool a,b,c;

int main()
{
    string str;
    cin >> str;
    
    int len = str.length();
    bool a = true;
    
    for(int i=0; i<len; ++i)
    {
        if(str[i] == 'A')
        {
            bool tmp = a;
            a = b;
            b = tmp;
        }
        else if(str[i] == 'B')
        {
            bool tmp = b;
            b = c;
            c = tmp;
        }
        else if(str[i] == 'C')
        {
            bool tmp = a;
            a = c;
            c = tmp;
        }
    }
    
    if(a)
    {
        cout << 1;
    }
    else if(b)
    {
        cout << 2;
    }
    else if(c)
    {
        cout << 3;
    }
    
}