#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << (a > b ? b*100/2 : a*100/2);
}