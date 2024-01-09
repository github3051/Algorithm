#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a;
  while(true){
    cin >> a;
    if(a == 0)
    {
        break;
    }
      a = 1 + a + pow(a,2) + pow(a,3) + pow(a,4);
        std::cout << std::fixed << std::setprecision(2) << a << '\n';
  }
}