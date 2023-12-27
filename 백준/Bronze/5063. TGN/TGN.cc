#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    
    int r,e,c;
    while(tc--)
    {
        cin >> r >> e >> c;
        
        if(r < e-c)
        {
            cout << "advertise\n";
        }
        else if(r == e -c)
        {
            cout << "does not matter\n";
        }
        else
        {
            cout << "do not advertise\n";
        }
    }
}