#include <iostream>
using namespace std;

int main()
{
    int ans;
    cin >> ans;
    while(true)
    {
        char cInput;
        int iInput;
        
        cin >> cInput;
        if(cInput == '=')
        {
            break;
        }
        
        cin >> iInput;
        
        if(cInput == '+')
        {
            ans += iInput;
        }
        else if(cInput == '-')
        {
            ans -= iInput;
        }
        else if(cInput == '*')
        {
            ans *= iInput;
        }
        else if(cInput == '/')
        {
            ans /= iInput;
        }
    }
    
    cout << ans;
}