#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    int maxExtensionCord = 0;
    for(int i=0; i<k; ++i)
    {
        int ExtensionCord;
        cin >> ExtensionCord;
        maxExtensionCord += ExtensionCord/2 + (ExtensionCord%2 != 0 ? 1 : 0);
    }
    
    if(maxExtensionCord >= n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}