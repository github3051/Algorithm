#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);    
    int t;
    long long n;
    std::cin >> t;
    
    while(t--)
    {
        std::cin >> n;
        std::cout << n*n << '\n';
    }
}