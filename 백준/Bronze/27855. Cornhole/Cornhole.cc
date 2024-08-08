#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int p1h,p1b,p2h,p2b;
    cin >> p1h >> p1b >> p2h >> p2b;
    int p1Score = p1h*3 + p1b;
    int p2Score = p2h*3 + p2b;
    if(p1Score == p2Score)
    {
        cout << "NO SCORE";
    }
    else if(p1Score > p2Score)
    {
        cout << 1 << ' ' << p1Score - p2Score;
    }
    else
    {
        cout << 2 << ' ' << p2Score - p1Score;
    }
}