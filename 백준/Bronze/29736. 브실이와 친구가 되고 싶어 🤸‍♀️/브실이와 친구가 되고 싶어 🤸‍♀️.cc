#include <iostream>
#include <vector>

int main()
{
	int a, b, k, x;
	std::cin >> a >> b >> k >> x;

	std::vector<bool> similar(b+1);
	int left = k - x, right = k + x;

	for (int i = a; i <= b; ++i)
	{
		similar[i] = true;
	}

	if (right > b)
	{
		right = b;
	}

	if (left < 0)
	{
		left = 0;
	}

	int ans = 0;
	for (int i = left; i <= right; ++i)
	{
		if (similar[i] == true)
		{
			ans += 1;
		}
	}

	if (ans != 0)
	{
		std::cout << ans;
	}
	else
	{
		std::cout << "IMPOSSIBLE";
	}
}