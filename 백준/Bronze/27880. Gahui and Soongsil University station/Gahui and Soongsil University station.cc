#include <iostream>
using namespace std;

int main()
{
    int res = 0;

    string path;
    int height;    
    
    for(int i=0; i<4; ++i)
    {
        cin >> path >> height;
        if(path == "Es")
        {
            res += height*21;
        }
        else
        {
            res += height*17;
        }
        
    }
    
    cout << res;
}