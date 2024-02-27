#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    int ans = ( (a == 1 || b == 1) ? a+b-1 : 2*(a+b-2));
    cout << ans;
}