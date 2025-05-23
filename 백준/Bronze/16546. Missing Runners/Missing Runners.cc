#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<bool> number(n+1, false);
    for (int i = 0; i < n-1; ++i)
    {
        int tmp;
        cin >> tmp;
        number[tmp] = true;
    }

    for (int i=1; i<=n; ++i)
    {
        if (number[i] == false)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}