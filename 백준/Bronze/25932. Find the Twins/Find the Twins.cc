#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int tmp;
    while(testCases--)
    {
        bool isZack = false, isMack = false;
        for(int i=0; i<10; ++i)
        {
            cin >> tmp;
            cout << tmp << ' ';
            if(tmp == 17)
            {
                isZack = true;
            }
            
            if(tmp == 18)
            {
                isMack = true;
            }
        }
        cout << '\n';
        
        if(isZack && isMack)
        {
            cout << "both\n";
        }
        else if(isZack)
        {
            cout << "zack\n";
        }
        else if(isMack)
        {
            cout << "mack\n";
        }
        else
        {
            cout << "none\n";
        }
        
        cout << '\n';
    }
}