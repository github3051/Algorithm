#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ( n%3 == 0 ? 'S' : (n%3 == 1 ? 'U' : 'O'));
}