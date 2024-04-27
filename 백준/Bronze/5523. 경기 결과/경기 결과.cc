#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int aScore = 0;
    int bScore = 0;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        if(a>b)
        {
            aScore +=1;
        }
        else if(a<b)
        {
            bScore +=1;
        }
    }
    cout << aScore << ' ' << bScore;
}