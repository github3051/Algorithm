#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    if(n-7 >= 1)
    {
        cout << n-7;
    }
    else
    {
        for(int i=28; i<=31; ++i)
        {
            if(i+n-14 == m)
            {
                cout << i + n - 7;
                return 0;
            }
        }
    }
}