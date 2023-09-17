#include <iostream>

int main()
{
	int n, u, l;
	std::cin >> n >> u >> l;

	if (n >= 1000 && (u >= 8000 || l >= 260))
	{
		std::cout << "Very Good";
	}
	else if (n >= 1000)
	{
		std::cout << "Good";
	}
	else
	{
		std::cout << "Bad";
	}
}