#include <iostream>
using namespace std;


int main()
{
    string str;
    int a=0, b=0;
    cin >> str;
    int strlen = str.length();
    for(int i = 0; i < strlen; i+=2)
    {
        if(str[i] == 'A')
        {
            a += str[i+1] - '0';
        }
        else
        {
            b += str[i+1] - '0';
        }
    }
    
    if(a > b) 
    {
        cout << "A";
    }
    else 
    {
        cout << "B";
    }
}