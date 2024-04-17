#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        double input;
        cin >> input;
        cout << '$' << fixed << setprecision(2) << input*0.8 << '\n';
    }
}