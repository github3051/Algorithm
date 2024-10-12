#include <iostream>
using namespace std;

int main()
{
    int t,n,c;
    cin >> t;
    while(t--)
    {
        cin >> n >> c;
        cout << n/c + (n%c == 0 ? 0 : 1) << '\n';
    }
}