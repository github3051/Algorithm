#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int a,b;
        cin >> a >> b;
        cout << "You get " << a/b <<" piece(s) and your dad gets " << a%b << " piece(s).\n";
    }
}