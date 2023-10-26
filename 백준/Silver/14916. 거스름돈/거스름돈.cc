#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int five = n/5;
    
    int ans = -1;
    
    for(int i=five; i>=0; --i)
    {
        if( (n - 5*i)%2 == 0 ) // 거스름돈이 있으면 
        {
            ans = i + (n - 5*i)/2;
            break;
        }
    }
    
    cout << ans;
}