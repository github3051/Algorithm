#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    for(char c = 'A'; c <= 'Z'; c++)
    {
        if(str.find(c) == string::npos)
        {
            cout << c;
            return 0;
        }
    }
}