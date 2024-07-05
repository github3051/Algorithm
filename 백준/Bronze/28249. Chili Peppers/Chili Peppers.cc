#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    unordered_map<string, int> umap = {{"Poblano",1500},{"Mirasol",6000},{"Serrano",15500},{"Cayenne",40000},{"Thai",75000},{"Habanero",125000}};
    
    int ans = 0;
    while(n--)
    {
        string str;
        cin >> str;
        
        ans += umap[str];
    }
    
    cout << ans;
}