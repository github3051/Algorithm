#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a - b <= 1 && -1 <= a - b)
    {
        cout << a + b;
    }
    else
    {
        cout << 2 * (a > b ? b : a) + 1;
    }
}