#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int price = 250;
    double s,a,b;
    cin >> s >> a >> b;
    if(s <= a)
    {
        cout << price;
    }
    else
    {
        cout << price+100*ceil((s-a)/b);
    }
}