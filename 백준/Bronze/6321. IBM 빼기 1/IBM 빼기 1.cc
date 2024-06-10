#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    int idx = 1;
    while(testCases--)
    {
        string str;
        cin >> str;
        int sLen = str.length();
        
        cout << "String #" << idx << '\n';
        for(int i=0; i<sLen; ++i)
        {
            if(str[i] == 'Z')
            {
                cout << 'A';
            }
            else
            {
                cout.put(str[i]+1);
            }
        }
        cout << "\n\n";
        idx += 1;
    }
}