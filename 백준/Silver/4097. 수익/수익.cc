#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    while(true)
    {
        int n;
        cin >> n;
        
        if(n == 0)
        {
            break;
        }
        
        vector<int> vec(n);
        for(int i=0; i<n; ++i)
        {
            cin >> vec[i];
        }
        
        
        for(int i=1; i<n; ++i)
        {
            vec[i] = max(vec[i-1] + vec[i], vec[i]);
        }
        
        cout << *max_element(vec.begin(),vec.end()) << '\n';
    }
}