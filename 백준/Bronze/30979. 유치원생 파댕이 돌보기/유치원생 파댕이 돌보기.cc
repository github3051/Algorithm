#include <iostream>
using namespace std;


int main()
{
    int time, n;
    cin >> time >> n;
    
    int sum = 0;
    for(int i=0; i<n; ++i)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    
    if(time <= sum)
    {
        cout << "Padaeng_i Happy";
    }
    else
    {
        cout << "Padaeng_i Cry";
    }
}