#include <iostream>
using namespace std;

int main()
{
    bool plug[] = { 0,0,0,0,0 };
    bool outlet[] = { 0,0,0,0,0 };
    for (int i = 0; i < 5; ++i)
    {
        cin >> plug[i];
    }
    for (int i = 0; i < 5; ++i)
    {
        cin >> outlet[i];
    }

    for (int i = 0; i < 5; ++i)
    {
        if (plug[i] == outlet[i])
        {
            cout << 'N';
            return 0;
        }
    }

    cout << 'Y';
}
