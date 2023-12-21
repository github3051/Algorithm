#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char tmp;
    for(int i=0; i<15; ++i)
    {
        for(int j=0; j<15; ++j)
        {
            cin >> tmp;
            if(tmp == 'w')
            {
                cout << "chunbae";
                return 0;
            }
            
            if(tmp == 'b')
            {
                cout << "nabi";
                return 0;
            }
            
            if(tmp == 'g')
            {
                cout << "yeongcheol";
                return 0;
            }
        }
    }
}