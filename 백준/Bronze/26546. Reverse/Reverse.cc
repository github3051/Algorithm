#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        string str;
        int a,b;
        cin >> str >> a >> b;
        
        int len = str.length();
        for(int i=0; i<len; ++i)
        {
            if(a <= i && i < b)
            {
                continue;
            }
            else
            {
                cout << str[i];
            }
        }
        
        cout << '\n';
    }
}