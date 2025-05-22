#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        int even = 0, odd = 0;
        for (int i = 0; i < n; ++i)
        {
            int tmp;
            cin >> tmp;
            if (tmp % 2 == 0)
            {
                even += tmp;
            }
            else
            {
                odd += tmp;
            }
        }

        cout << (even == odd ? "TIE\n" : (even > odd ? "EVEN\n" : "ODD\n"));

    }

    return 0;
}