#include <iostream>
using namespace std;

int main()
{
    while(true)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == 0 && d== 0 )
        {
            break;
        }
        
        cout << c-b << ' ' << d-a << '\n';
    }
}