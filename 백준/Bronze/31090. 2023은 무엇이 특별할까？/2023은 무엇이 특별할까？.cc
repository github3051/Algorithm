#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        int year;
        cin >> year;
        
        if((year+1)%(year%100) == 0)
        {
            cout << "Good\n";
        }
        else
        {
            cout << "Bye\n";
        }
    }
}