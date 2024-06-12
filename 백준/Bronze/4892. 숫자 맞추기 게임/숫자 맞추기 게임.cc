#include <iostream>
using namespace std;

int main()
{
    int n, idx = 1;
    while(true)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        
        int n1,n2,n3,n4;
        n1 = 3*n;
        
        if(n1%2 == 0)
        {
            cout << idx << ". " << "even ";
            n2 = n1/2;
        }
        else
        {
            cout << idx << ". " << "odd ";
            n2 = (n1+1)/2;
        }
        n3 = 3*n2;
        n4 = n3/9;
        
        cout << n4 << '\n';
        
        idx += 1;
    }
}