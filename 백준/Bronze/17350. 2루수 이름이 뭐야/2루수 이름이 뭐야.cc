#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isIncluded = false;
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "anj")
        {
            isIncluded = true;
        }
    }

    cout << (isIncluded == true ? "뭐야;" : "뭐야?");

    return 0;
}