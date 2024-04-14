#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b,c;
    cin >> a >> b >> c;
    
    int sum = stoi(a) + stoi(b) - stoi(c);
    string strSum = a + b;
    cout << sum << '\n' << stoi(strSum) - stoi(c);
}