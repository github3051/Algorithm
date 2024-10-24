#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    long long molecules = 1, denominators = 1;
    for (int i = 1; i <= 5; ++i)
    {
        molecules *= (n + 1 - i);
        denominators *= i;
    }
    cout << molecules / denominators;
}