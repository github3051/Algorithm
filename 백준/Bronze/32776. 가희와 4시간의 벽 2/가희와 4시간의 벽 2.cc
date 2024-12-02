#include <iostream>
using namespace std;


int main() {

    int sab, ma, fab, mb;
    cin >> sab >> ma >> fab >> mb;

    if (sab <= ma + fab + mb || sab <= 240)
    {
        cout << "high speed rail";
    }
    else
    {
        cout << "flight";
    }
}