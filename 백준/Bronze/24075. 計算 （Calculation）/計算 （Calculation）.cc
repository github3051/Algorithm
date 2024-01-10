#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    if(b >= 0)
    {
        cout << a + b << '\n' << a - b;
    }
    else
    {
        cout << a-b << '\n' << a+b;
    }
}