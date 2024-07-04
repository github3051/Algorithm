#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int curr, time;
        cin >> curr >> time;
        cout << curr + time/4 - time/7 << '\n';
    }
}