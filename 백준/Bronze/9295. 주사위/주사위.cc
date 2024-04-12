#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    int a,b;
    for(int i=1; i<=testCases; ++i)
    {
        cin >> a >> b;
        cout << "Case " << i << ": " << a+b << '\n';
    }
}