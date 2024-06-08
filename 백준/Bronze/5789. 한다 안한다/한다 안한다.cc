#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        string str;
        cin >> str;
        
        int len = str.length();
        cout << (str[len/2-1] == str[len/2] ? "Do-it\n" : "Do-it-Not\n");
    }
}