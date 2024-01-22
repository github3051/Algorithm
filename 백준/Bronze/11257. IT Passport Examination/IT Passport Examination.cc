#include <iostream>
using namespace std;

int main()
{
    int testCases, num, a, b, c, totalScore;
    cin >> testCases;
    while(testCases--)
    {
        cin >> num >> a >> b >> c;
        totalScore = a + b + c;
        cout << num << ' ' << totalScore << ' ';
        if(totalScore >= 55 && a >= 11 && b >= 8 && c >= 12) 
        {
            cout << "PASS\n";
        }
        else
        {
            cout << "FAIL\n";
        }
  }
}