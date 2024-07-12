#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int sLen = str.length();
    for(int i=0; i<sLen; ++i)
    {
        if(str[i] == 'a')
        {
            str[i] = '4';
        }
        else if(str[i] == 'e')
        {
            str[i] = '3';
        }
        else if(str[i] == 'i')
        {
            str[i] = '1';
        }
        else if(str[i] == 'o')
        {
            str[i] = '0';
        }
        else if(str[i] == 's')
        {
            str[i] = '5';
        }
    }
    cout << str;
}