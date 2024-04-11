#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while(true)
    {
        if(n == 1)
        {
            cout << 1;
            break;
        }
        
        if(n%2 == 0)
        {
            n /= 2;
        }
        else
        {
            cout << 0;
            break;
        }
    }
}