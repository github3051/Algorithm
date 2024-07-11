#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        if( (a<=2&&b<=1) || (a<=1&&b<=2) )
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}