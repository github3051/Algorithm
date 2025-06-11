#include <iostream>
#include <bitset>
using namespace std;

int main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        int a, chkBit;
        cin >> a >> chkBit;
        bitset<16> bits(a);
        size_t binaryCount = bits.count();

        cout << (binaryCount % 2 == chkBit ? "Valid" : "Corrupt") << '\n';
    }

    return 0;
}