#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    
    int ans = -1;
    while(n--)
    {
        int start, end;
        cin >> start >> end;
        
        if(start + end <= x && ans < start)
        {
            ans = start;
        }
    }
    cout << ans;
}