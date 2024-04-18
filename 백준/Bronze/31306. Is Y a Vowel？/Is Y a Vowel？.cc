#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int strLen = str.length();
    int ySum = 0;
    int nySum = 0;
    for(int i=0; i<strLen; ++i)
    {
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
        {
            ySum += 1;
            nySum += 1;
        }
        
        if(str[i] == 'y')
        {
            ySum += 1;
        }
    }
    
    cout << nySum << ' ' << ySum;
}