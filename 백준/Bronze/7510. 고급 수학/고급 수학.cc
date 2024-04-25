#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; ++i)
    {
        vector<int> triangle(3);
        for(int j=0; j<3; ++j)
        {
            cin >> triangle[j];
        }
        sort(triangle.begin(), triangle.end());
        
        cout << "Scenario #" << i << ":\n";
        if(triangle[2]*triangle[2] == triangle[1]*triangle[1] + triangle[0]*triangle[0])
        {
            cout << "yes\n\n"; 
        }
        else
        {
            cout << "no\n\n";
        }
    }
}