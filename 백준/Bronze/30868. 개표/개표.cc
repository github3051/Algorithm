#include <iostream>
using namespace std;

void PrintOne(const int& size)
{
    for(int i=0; i<size; ++i)
    {
        cout << '|';
    }
}

void PrintFive(const int& size)
{
    for(int i=0; i < size; ++i)
    {
        cout << "++++ ";
    }
}

int main()
{
    int n;
    cin >> n;
    
    while(n--)
    {
        int nVotes;
        cin >> nVotes;
        PrintFive(nVotes/5);
        PrintOne(nVotes%5);
        cout << '\n';
    }
}