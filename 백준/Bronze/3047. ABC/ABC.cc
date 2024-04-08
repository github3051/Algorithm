#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec(3);
    for(int i=0; i<3; ++i)
    {
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    
    string str;
    cin >> str;
    
    for(int i=0; i<3; ++i)
    {
        cout << vec[str[i]-'A'] << ' ';
    }
}