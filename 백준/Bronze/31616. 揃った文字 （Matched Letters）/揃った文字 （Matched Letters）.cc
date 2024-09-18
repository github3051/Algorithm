#include <iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    
    for(int i = 1; i<n ; ++i)
    {
        if(str[0] != str[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}