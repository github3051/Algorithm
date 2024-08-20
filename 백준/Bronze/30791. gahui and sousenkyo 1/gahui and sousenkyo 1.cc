#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    vector<int> vec(n);
    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
        if (vec[i] > max)
        {
            max = vec[i];
        }
    }

    int ans = -1;
    for (const auto& elem : vec)
    {
        if (elem >= max - 1000)
        {
            ans += 1;
        }
    }
    cout << ans;
}