#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    int ans = a*50 -b*10;
    cout << ans + (a>b ? 500 : 0);
}