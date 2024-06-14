#include <iostream>
using namespace std;

int main()
{
    int h,w,m,n;
    cin >> h >> w >> m >> n;
    cout << (h/(m+1) + (h%(m+1) == 0 ? 0 : 1)) * (w/(n+1) +  + (w%(n+1) == 0 ? 0 : 1));
}