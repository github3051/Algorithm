#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> vBool(3, false);

    for (int i = 0; i < 3; ++i)
    {
        int iTmp;
        for (int j = 0; j < n; ++j)
        {
            cin >> iTmp;
            if (iTmp == 7)
            {
                vBool[i] = true;
            }
        }
    }

    for (const auto& elem : vBool)
    {
        if (elem == false)
        {
            cout << 0;
            return 0;
        }
    }
    cout << 777;
}