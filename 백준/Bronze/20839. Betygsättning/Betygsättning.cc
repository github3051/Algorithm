#include <iostream>
using namespace std;

int main()
{
    double x,y,z,x1,y1,z1;
    cin >> x >> y >> z >> x1 >> y1 >> z1;
    
    if(x1 >= x && y1 >= y && z1 >= z)
    {
        cout << 'A';
    }
    else if(x1 >= x/2 && y1 >= y && z1 >= z)
    {
        cout << 'B';
    }
    else if( y1 >= y && z1 >= z)
    {
        cout << 'C';
    }
    else if ( y1 >= y/2 && z1 >= z/2)
    {
        cout << 'D';
    }
    else
    {
        cout << 'E';
    }
}