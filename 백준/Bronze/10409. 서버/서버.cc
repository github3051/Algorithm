#include <iostream>
using namespace std;

int main()
{
    int n, limitTime;
    cin >> n >> limitTime;
    
    int sumTime=0, nTask=0;
    for(int i=0; i<n; ++i)
    {
        int timePerTask;
        cin >> timePerTask;
        
        sumTime += timePerTask;
        if(sumTime > limitTime)
        {
            break;
        }
        
        nTask += 1;
    }
    cout << nTask;
}