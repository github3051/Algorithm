#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << (str[0] == 'E' ? 'I' : 'E') << (str[1] == 'N' ? 'S' : 'N') << (str[2] == 'F' ? 'T' : 'F') << (str[3] == 'J' ? 'P' : 'J');
}