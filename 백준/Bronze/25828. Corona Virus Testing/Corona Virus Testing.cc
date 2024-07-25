#include <iostream>
using namespace std;

int main()
{
    int g,p,t;
    cin >> g >> p >> t;
    
    cout << (g*p > g + p*t ? 2 : g*p == g + p*t ? 0 : 1);
}