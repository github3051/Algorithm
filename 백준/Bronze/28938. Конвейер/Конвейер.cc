#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int ans = 0;
    while(n--)
    {
        int tmp;
        cin >> tmp;
        ans += tmp;
    }
    
    if(ans == 0)
    {
        cout << "Stay";
    }
    else if(ans > 0)
    {
        cout << "Right";
    }
    else if(ans < 0)
    {
        cout << "Left";
    }
}