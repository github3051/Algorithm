#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double k, d1, d2;
    cin >> k >> d1 >> d2;

    cout << fixed <<  setprecision(6) << k*k - (pow( (d1-d2)/2,2));
}