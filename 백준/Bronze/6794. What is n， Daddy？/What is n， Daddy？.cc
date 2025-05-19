#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = n; i > 0; --i)
    {
        if ((n - i > 5) || (i > 5))
        {
            continue;
        }
        else if (n - i <= n / 2)
        {
            ans += 1;
        }
        else
        {
            break;
        }
    }

    cout << ans;
    return 0;
}


