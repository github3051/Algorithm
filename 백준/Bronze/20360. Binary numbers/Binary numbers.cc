#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    for (int i = 0; ; ++i)
    {
        if (n <= 0)
            break;

        if (n % 2 == 1)
            cout << i << ' ';

        n /= 2;
    }
}
