#include <iostream>
using namespace std;


int main() {
    long long n;
    cin >> n;

    int cnt = 0;
    while (n > 1)
    {
        if (n % 2 == 1)
        {
            n += 1;
        }
        else
        {
            n /= 2;
        }
        cnt += 1;
    }

    cout << cnt;

    return 0;
}