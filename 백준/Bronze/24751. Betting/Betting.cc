#include <iostream>
using namespace std;

int main()
{
    double input;
    cin >> input;
    cout << fixed;
    cout.precision(10);
    cout << 100 / input << '\n' << 100 / (100-input);
}