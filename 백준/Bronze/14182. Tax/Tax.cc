#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        if (n <= 1'000'000)
        {
            cout << n;
        }
        else if (n <= 5'000'000)
        {
            cout << n*9/10;
        }
        else
        {
            cout << 8*n/10;
        }
        cout << '\n';
    }
}