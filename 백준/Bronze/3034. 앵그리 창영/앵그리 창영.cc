#include <iostream>
using namespace std;

int main()
{
    int n,w,h;
    cin >> n >> w >> h;
    
    int max = w*w + h*h;
    while(n--)
    {
        int elem;
        cin >> elem;
        if(elem*elem <= max)
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NE\n";
        }
    }
}