#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int y = 0, k = 0;
        for (int i = 0; i < 9; ++i)
        {
            int yTmp, kTmp;
            cin >> yTmp >> kTmp;
            y += yTmp;
            k += kTmp;
        }
        cout << (y > k ? "Yonsei" : (y < k ? "Korea" : "Draw"))  << '\n';
    }
}