
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int y = 2024;
    int m = 1 + n * 7;
    cout << y + (m-1) / 12 << ' ' << (m % 12 == 0 ? 12 : m % 12);
}
