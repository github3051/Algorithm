#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,p;
    cin >> a >> b >> c >> d >> p;
    int y = (p > c ? b + (p-c)*d : b);
    cout << (a*p < y ? a*p : y);
}