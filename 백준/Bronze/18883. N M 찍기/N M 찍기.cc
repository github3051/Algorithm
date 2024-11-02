#include <iostream>
using namespace std;

int main()
{
    int rows,columns;
    cin >> rows >> columns;
    
    int ans = 1;
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<columns; ++j)
        {
            cout << ans;
            ans += 1;
            if(j != columns -1)
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}