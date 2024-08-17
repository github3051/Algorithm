#include <iostream>
using namespace std;

int main()
{
    int len;
    string str;
    cin >> len >> str;
    
    int continuation = 0;
    for(int i=0; i<len; ++i)
    {
        if(str[i] == 'o')
        {
            continuation += 1;
        }
        else
        {
            continuation = 0;
        }
        
        
        if(continuation == 3)
        {
            cout << "Yes";
            return 0;
        }
        
    }
    
    cout << "No";
}