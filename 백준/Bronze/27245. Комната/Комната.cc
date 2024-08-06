#include <iostream>
using namespace std;

int main()
{
    int w,l,h;
    cin >> w >> l >> h;
    
    int lng = (w > l ? w : l);
    int shrt = (w > l ? l : w);
    
    if( shrt / h >= 2 && lng / shrt <= 2)
    {
        cout << "good";
    }
    else
    {
        cout << "bad";
    }
}