#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    int sum = a+b;
    string str = to_string(sum);
    cout << str.length();
}