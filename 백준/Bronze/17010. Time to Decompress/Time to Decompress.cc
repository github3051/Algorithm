#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        int n;
        char c;
        cin >> n >> c;
        
        for(int i=0; i<n; ++i)
        {
            cout << c;
        }
        cout << '\n';
    }
}