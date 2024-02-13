#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string str;
    cin >> str;
    
    if(str[n-1] == 'G')
    {
        str.erase(n-1,1);
    }
    else
    {
        str.push_back('G');
    }
    
    cout << str;
}