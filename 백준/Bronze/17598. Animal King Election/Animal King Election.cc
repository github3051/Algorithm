#include <iostream>
using namespace std;

int main()
{
    int lion = 0;
    for(int i=0; i<9; ++i)
    {
        string str;
        cin >> str;
        if(str == "Lion")
        {
            lion += 1;
        }
    }
    cout << (lion >= 5 ? "Lion" : "Tiger");
}