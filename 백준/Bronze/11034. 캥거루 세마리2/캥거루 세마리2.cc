#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    while(cin >> a >> b >> c)
    {
        cout << (c-b > b-a ? c-b-1 : b-a-1) << '\n';
    }
}