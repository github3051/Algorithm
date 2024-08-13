#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(10);
    for(int i=0; i<10; ++i)
    {
        cin >> vec[i];
    }
    
    for(int i=0; i<10; ++i)
    {
        int sum = 0;
        for(int j=0; j<10; ++j)
        {
            if(i == j)
            {
                continue;
            }
            sum += vec[j];
        }
        
        if(sum == vec[i])
        {
            cout << vec[i];
            return 0;
        }
    }
}