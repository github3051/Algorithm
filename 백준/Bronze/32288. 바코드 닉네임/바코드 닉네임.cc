#include <iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;

    for (int i = 0; i < n; ++i)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            cout << (char)(str[i] - ('a' - 'A'));
        }
        else if ('A' <= str[i] && str[i] <= 'Z')
        {
            cout << (char)(str[i] + ('a' - 'A'));
        }
    }
}