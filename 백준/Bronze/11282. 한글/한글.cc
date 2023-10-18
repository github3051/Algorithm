#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	n += 3071;
	std::string str;
	str.push_back(n / 4096 + 234);
	str.push_back(n / 64 % 64 + 128);
	str.push_back(n % 64 + 128);
	std::cout << str;

}