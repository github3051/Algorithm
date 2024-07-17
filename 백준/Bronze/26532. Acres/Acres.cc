#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int width, length; cin >> width >> length;

  int sqYard = width * length;

  double acreToYard = 4840.0;
  double cntCorn = 5.0;

  double acres = (double)sqYard / acreToYard;
  int bags = ceil(acres / cntCorn);

  cout << bags << "\n";

  return 0;
}