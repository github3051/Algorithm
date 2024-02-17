#include <iostream>
using namespace std;

int main()
{
    double c4,a3,a4, tmp1,tmp2,tmp3;
    cin >> c4 >> a3 >> a4;
    tmp1 = 229*324*c4*2;
    tmp2 = 297*420*a3*2;
    tmp3 = 210*297*a4;
    
    cout << fixed;
    cout.precision(6);
    cout << (tmp1 + tmp2 + tmp3) * 0.000001;
}