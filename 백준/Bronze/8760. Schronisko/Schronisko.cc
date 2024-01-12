#include <iostream>

int main() {
    int n, m, k;
    std::cin>>k;
    for(int i = 0; i < k; i++)
    {
        std::cin>>n>>m;
        std::cout<<n*m/2<<'\n';
    }
    return 0;
}