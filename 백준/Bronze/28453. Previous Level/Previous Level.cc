#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int lv;
    while(n--)
    {
        cin >> lv;
        if(lv >= 300)
        {
            cout << "1 ";
        }
        else if(lv >= 275)
        {
            cout << "2 ";
        }
        else if(lv >= 250)
        {
            cout << "3 ";
        }
        else
        {
            cout << "4 ";
        }
    }
}