#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int eLen = (str.length() - 2)*2;
    
    cout << 'h';
    for(int i=0; i<eLen; ++i)
    {
        cout << 'e';
    }
    cout << 'y';
}