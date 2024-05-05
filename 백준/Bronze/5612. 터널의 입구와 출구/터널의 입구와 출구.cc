#include <iostream>
using namespace std;

int main()
{
    int n,currNum;
    cin >> n >> currNum;
    
    int ans = currNum;
    for(int i=0; i<n; ++i)
    {
        int in, out;
        cin >> in >> out;
        currNum = currNum + in - out;
        if(currNum < 0)
        {
            cout << 0;
            return 0;
        }
        
        if(currNum > ans)
        {
            ans = currNum;
        }
    }
    cout << ans;
}