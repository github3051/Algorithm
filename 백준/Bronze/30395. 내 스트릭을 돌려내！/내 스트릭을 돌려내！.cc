#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int streak = 0;
    int maxAns = 0;
    //bool omission = false, streak = false;
    int strkFreeze = 0;
    for(int i=0; i<n; ++i)
    {
        int today;
        cin >> today;
        
        if(today)
        {
            streak += 1;
        }
        else
        {
            // 만약 스트릭 프리즈가 있으면
            if(strkFreeze == 0)
            {
                strkFreeze += 1;
            }
            else
            {
                maxAns = max(streak, maxAns);
                streak = 0;
            }
        }
        
        if(strkFreeze == 1)
        {
            strkFreeze += 1;
        }
        else if(strkFreeze == 2)
        {
            strkFreeze = 0;
        }
    }
    
    maxAns = max(streak, maxAns);
    cout << maxAns;
}