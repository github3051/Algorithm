#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265359
using namespace std;


int main(){    
    double circularArea, radius;
    cin >> circularArea;
    radius = sqrt(circularArea / PI);
    cout << fixed << setprecision(9) << 2*radius * PI;
}