#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int idx = 0;
    int sLen = str.length();
    while(idx < sLen)
    {
        cout << str[idx];
        idx += (str[idx] - 'A') + 1;
    }
}