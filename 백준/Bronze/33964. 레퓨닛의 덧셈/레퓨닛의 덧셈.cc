#include <iostream>
using namespace std;

int main() 
{
    int x,y;
    cin >> x >> y;

    string str = "";
    int big, small;
    if (x >= y)
    {
        big = x;
        small = y;
    }
    else
    {
        big = y;
        small = x;
    }


    for (int i = 0; i < big-small; ++i)
    {
        str += '1';
    }

    for (int i = 0; i < small; ++i)
    {
        str += '2';
    }

    cout << str;

    return 0;
}

