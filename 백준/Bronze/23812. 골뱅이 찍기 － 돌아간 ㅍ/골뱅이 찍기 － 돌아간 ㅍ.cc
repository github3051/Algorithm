#include <iostream>
using namespace std;

void PrintWithBlank(const int& row, const int& col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (j < row || j >= col - row)
            {
                cout << '@';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

void Print(const int& row, const int& col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << '@';
        }
        cout << '\n';
    }
}

int main() 
{
    int n;
    cin >> n;

    PrintWithBlank(n, 5 * n);
    Print(n, 5 * n);
    PrintWithBlank(n, 5 * n);
    Print(n, 5 * n);
    PrintWithBlank(n, 5 * n);
}