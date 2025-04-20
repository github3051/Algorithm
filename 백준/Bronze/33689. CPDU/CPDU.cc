#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while(n--)
    {
        string str;
        cin >> str;
        if(str[0] == 'C')
        {
            ans += 1;
        }
    }
    cout << ans;
}