#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<pair<int,int>> vec = {{12,1600},{11,894},{11,1327},{10,1311},{9,1004},{9,1178},{9,1357},{8,837},{7,1055},{6,556},{6,773}};
    
    cout << vec[n-1].first << ' ' << vec[n-1].second;
}