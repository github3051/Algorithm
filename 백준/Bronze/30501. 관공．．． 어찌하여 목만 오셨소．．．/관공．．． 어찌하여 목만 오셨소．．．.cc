#include <iostream>
using namespace std;

int main()
{
    int nPeople;
    cin >> nPeople;
    
    string ans = "none";
    while(nPeople--)
    {
        string str;
        cin >> str;
        
        int len = str.length();
        if(ans == "none")
        {
            for(int i=0; i<len; ++i)
            {
                if(str[i] == 'S')
                {
                    ans = str;
                    break;
                }
            }
        }
    }
    
    cout << ans;
}