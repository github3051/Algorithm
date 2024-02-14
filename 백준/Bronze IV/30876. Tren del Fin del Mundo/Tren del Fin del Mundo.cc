#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    
    int tmpX,tmpY;
    pair<int,int> ans = {1000,1001};
    while(n--)
    {
        cin >> tmpX >> tmpY;
        if(ans.second > tmpY)
        {
            ans = {tmpX,tmpY};
        }
    }
    
    cout << ans.first << ' ' << ans.second;
}