#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    //int eqSequence = 1 + b * (a - 2);
    long long sum = 0;
    for (int i = 0; i <= b; ++i)
    {
        sum += 1 + i * (a - 2);
    }
    cout << sum;
}