#include <iostream>
using namespace std;

string Function(const string& str1, const string& str2)
{
    int len1 = str1.length();
        
    for(int i=0; i<len1; ++i)
    {
        if(str1[i] != str2[i])
        {
            return "ERROR\n";
        }
    }
    
    return "OK\n";
}

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        
        cout << Function(str1,str2);
    }
}