
#include <iostream>
using namespace std;

int alphabet['Z'-'A'];

int main()
{
    string str;
    cin >> str;
    int strlen = str.length();
    for (int i = 0; i< strlen; ++i)
    {
        alphabet[str[i] - 'A'] += 1;
    }
    cout << alphabet[str[0] - 'A'];
}