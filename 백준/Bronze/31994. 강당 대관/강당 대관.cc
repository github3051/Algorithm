#include <iostream>
using namespace std;

int main()
{
    int n=7;
    int max = 0;
    string ans;
    for(int i=0; i<n; ++i)
    {
        string str;
        int tmp;
        cin >> str >> tmp;
        if(max < tmp)
        {
            max = tmp;
            ans = str;
        }
    }
    cout << ans;
}