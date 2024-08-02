#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    char c = 'a' + (n-1) % 8;
    cout << c << ((n-1)/8 + 1);
}