#include <iostream>
using namespace std;

int main()
{
    int g,p,t;
    cin >> g >> p >> t;
    
    if(g + t*p == g*p)
    {
        cout << 0;
    }
    else if(g + t*p > g*p)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }
}