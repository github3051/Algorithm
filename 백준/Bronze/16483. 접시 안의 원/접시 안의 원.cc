#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    if ((t * t * 10 / 4) % 10 >= 5)
    {
        cout << t * t / 4+1;
    }
    else
    {
        cout << t * t / 4 ;
    }
}