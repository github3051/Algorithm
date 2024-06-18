#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    double dArr[5] = {350.34,230.90,190.55,125.30,180.90};
    
    while(testCases--)
    {
        int iArr[5];
        
        double sum = 0;
        for(int i=0; i<5; ++i)
        {
            cin >> iArr[i];
            sum += iArr[i]*dArr[i];
        }
        cout << '$' << fixed << setprecision(2) << sum << '\n';
        
    }
}