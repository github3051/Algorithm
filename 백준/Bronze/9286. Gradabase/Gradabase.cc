#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;
        cout << "Case " << i << ":\n";
        for (int j = 0; j < n; ++j)
        {
            int curr;
            cin >> curr;
            curr += 1;
            if (curr >= 7)
            {
                continue;
            }
            cout << curr << '\n';
        }
    }
}