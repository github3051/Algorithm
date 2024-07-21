#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        cout << a << ' ' << b << ' ' << c << '\n';
        int goodStats = (a>=10 ? 1 : 0) + (b>=10 ? 1 : 0) + (c>=10 ? 1 : 0);
        if(goodStats == 0)
        {
            cout << "zilch\n\n";
        }
        else if(goodStats == 1)
        {
            cout << "double\n\n";
        }
        else if(goodStats == 2)
        {
            cout << "double-double\n\n";
        }
        else
        {
            cout << "triple-double\n\n";
        }
    }
}