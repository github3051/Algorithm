#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(true)
    {
        cin >> n;
        
        // exit
        if(n == 0)
        {
            break;
        }
        
        vector<int> vec;
        for(int i=0; i<n; ++i)
        {
            int tmp;
            cin >> tmp;
            vec.emplace_back(tmp);
        }
        
        for(int i=n-1; i>=0; --i)
        {
            cout << vec[i] << '\n';
        }
        
        cout << 0 << '\n';
    }
    
}