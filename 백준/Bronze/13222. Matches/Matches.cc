#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, w, h;
    cin >> n >> w >> h;
    int maxLength = w * w + h *h;
    for (int i = 0; i < n; ++i)
    {
        int match;
        cin >> match;
        if (match*match <= maxLength)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}