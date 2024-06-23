#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int gandalf[6] = {1,2,3,3,4,10};
    int sauron[7] = {1,2,2,2,3,5,10};
    
    for(int idx = 1; idx <= t; ++idx)
    {
        int sum = 0;
        
        int tmp;
        for(int i=0; i<6; ++i)
        {
            cin >> tmp;
            sum += tmp*gandalf[i];
        }
        
        for(int i=0; i<7; ++i)
        {
            cin >> tmp;
            sum -= tmp*sauron[i];
        }
        
        cout << "Battle " << idx << ": ";
        if(sum == 0)
        {
            cout << "No victor on this battle field\n";
        }
        else if(sum < 0)
        {
            cout << "Evil eradicates all trace of Good\n";
        }
        else
        {
            cout << "Good triumphs over Evil\n";
        }
        
    }
}