#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(int i=0; i<4; ++i)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    
    int n;
    cin >> n;
    
    if(4*n <= sum)
    {
        cout << 0;
    }
    else
    {
        cout << 4*n - sum;
    }
}