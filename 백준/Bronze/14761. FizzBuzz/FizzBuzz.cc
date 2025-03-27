#include <iostream>
using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (i % x != 0 && i % y != 0)
        {
            cout << i;
        }
        else
        {
            cout << (i % x == 0 ? "Fizz" : "") << (i % y == 0 ? "Buzz" : "");
        }
        cout << '\n';
    }
}