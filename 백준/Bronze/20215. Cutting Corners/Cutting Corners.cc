#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double w,h,diagonalCut,rectangleCut;
    cin >> w >> h;
    rectangleCut = w + h;
    diagonalCut = sqrt(w*w + h*h);
    std::cout << std::fixed << std::setprecision(9) << rectangleCut - diagonalCut << std::endl;
}