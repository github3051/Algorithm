#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sumFrom1 = 0, sumFrom2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        sumFrom1 += i;
        sumFrom2 += i + 1;
    }

    if (sumFrom1 % 2 == sumFrom2 % 2)
    {
        cout << (sumFrom1 % 2 == 0 ? "Even" : "Odd");
    }
    else
    {
        cout << "Either";
    }
}