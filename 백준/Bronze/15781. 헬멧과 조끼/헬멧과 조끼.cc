#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int helmet = 0;
    int vest = 0;
    for(int i=0; i<n; ++i)
    {
        int tmp;
        cin >> tmp;
        if(helmet < tmp)
        {
            helmet = tmp;
        }
    }
    for(int i=0; i<m; ++i)
    {
        
        int tmp;
        cin >> tmp;
        if(vest < tmp)
        {
            vest = tmp;
        }
    }
    cout << helmet + vest;
}