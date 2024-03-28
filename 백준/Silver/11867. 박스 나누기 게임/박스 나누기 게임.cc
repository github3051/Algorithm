#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    cout << (n%2 == 0 || m%2 == 0 ? 'A' : 'B');
}
