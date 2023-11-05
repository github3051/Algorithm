#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0 ;i<n; ++i)
    {
        cin >> arr[i];
    }
    
    vector<int> increase(n, 1);
    vector<int> decrease(n, 1);
    for(int i=1; i<n; ++i)
    {
        if(arr[i] >= arr[i-1])
        {
            increase[i] = increase[i-1] + 1;
        }
        
        if(arr[i] <= arr[i-1])
        {
            decrease[i] = decrease[i-1] + 1;
        }
    }
    
    int incMax = *max_element(increase.begin(), increase.end()); 
    int decMax = *max_element(decrease.begin(), decrease.end());
    cout << (incMax >= decMax ? incMax : decMax);
}