#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, price;
        cin >> n >> price;
        cout << n << ' ' << price << '\n';
        if(n == 1)
        {
            cout << n*price << '\n';
        }
        else
        {
            cout << n*price - 2*(n-1) << '\n';
        }
    }
}