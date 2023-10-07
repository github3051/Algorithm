#include <iostream>
using namespace std;

int main()
{
    int patty, cheese;
    cin >> patty >> cheese;
    
    if(patty - cheese >= 1)
    {
        cout <<  2*cheese + 1;
    }
    else
    {
        cout << 2*patty - 1;
    }
}