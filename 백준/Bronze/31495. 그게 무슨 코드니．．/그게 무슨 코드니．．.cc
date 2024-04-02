#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    int strLen = str.length();
    
    if(str[0] == '\"' && str[strLen-1] == '\"' && strLen > 2)
    {
        for(int i=1; i<strLen-1; ++i)
        {
            cout << str[i];
        }
    }
    else
    {
        cout << "CE";
    }
}