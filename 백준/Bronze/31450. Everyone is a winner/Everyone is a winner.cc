#include <iostream>
using namespace std;

int main()
{
    int m,k;
    cin >> m >> k;
    
    cout << ( (m%k == 0) && (m >= k) ? "Yes" : "No");
}