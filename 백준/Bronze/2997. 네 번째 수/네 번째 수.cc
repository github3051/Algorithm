#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 3;
    vector<int> vec(n);
    for(int i=0; i<n; ++i)
    {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());
    
    if(vec[1] - vec[0] == vec[2] - vec[1])
    {
        cout << vec[2] + vec[1] - vec[0];
    }
    else if(vec[1] - vec[0] > vec[2] - vec[1])
    {
        cout << vec[0] + vec[2] - vec[1];
    }
    else
    {
        cout << vec[1] + vec[1] - vec[0];
    }
}