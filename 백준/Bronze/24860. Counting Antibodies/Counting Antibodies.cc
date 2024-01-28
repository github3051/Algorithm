#include <iostream>
using namespace std;


int main()
{
    long long vk, jk, va, ja, vh, dh, jh, lightChainK, lightChainA, heavyChain;
    cin >> vk >> jk >> va >> ja >> vh >> dh >> jh;
    lightChainK = vk * jk;
    lightChainA = va * ja;
    heavyChain = vh * dh * jh;
    cout << heavyChain*(lightChainA + lightChainK);
}