#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,d;
    cin >> n >> d;
    vector<int> vec(n);
    int sum = 0;
    for(int i=0; i<n; ++i)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    
    int dollerPerOneProblem = d / sum;
    
    for(int i=0; i<n; ++i)
    {
        cout << vec[i]*dollerPerOneProblem << '\n';
    }
    
}