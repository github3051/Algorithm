#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sumPrice = 0;
    for(int i=0; i<n; ++i)
    {
        int price;
        cin >> price;
        sumPrice += price;
    }
    cout << (sumPrice%3 == 0 ? "yes" : "no");
}