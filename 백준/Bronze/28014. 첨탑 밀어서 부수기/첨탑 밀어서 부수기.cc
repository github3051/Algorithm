#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
    }

    int ans = n;
    for (int i = 1; i < n; ++i)
    {
        if (vec[i] < vec[i - 1])
        {
            ans -= 1;
        }
    }
    cout << ans;
}