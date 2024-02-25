#include <iostream>
using namespace std;

int main()
{
    int m, s, g, l, r;
    double a, b;
    int ls, rs, lWait, rWait;
    cin >> m >> s >> g >> a >> b >> l >> r;
    
    lWait = l / a, rWait = r / b;
    ls = m % g ? m / g + 1 : m / g; 
    rs = m % s ? m / s + 1 : m / s; 
    if(ls < rs) 
    {
        if(ls + lWait < rs + rWait) 
        {
            cout << "friskus";
        }
        else
        {
            cout << "latmask";
        }
    }
    else 
    {
        if(ls + lWait < rs + rWait) 
        {
            cout << "friskus";
        }
        else
        {
            cout << "latmask";
        }
    }
}