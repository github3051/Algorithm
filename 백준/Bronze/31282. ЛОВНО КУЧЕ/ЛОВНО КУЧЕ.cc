#include <iostream>
using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    
    cout << n/(k-m) + ( n%(k-m) != 0 ? 1 : 0);
}