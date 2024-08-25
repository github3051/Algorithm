#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // 이거 안하면 시간초과남
    cin.tie(0);
    int t;
    cin >> t;
    
    while(t--)
    {
        long long n;
        cin >> n;
        
        cout << 2*n-1 << '\n';
    }
}