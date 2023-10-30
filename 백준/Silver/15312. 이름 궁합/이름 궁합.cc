#include <iostream>
#include <vector>
using namespace std;

int alphabet[] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int main()
{
	string myName, herName;
	cin >> myName >> herName;

	int len = myName.length();
	vector<int> compatibility;

	for (int i = 0; i < len; ++i)
	{
		compatibility.emplace_back(alphabet[myName[i] - 'A']);
		compatibility.emplace_back(alphabet[herName[i] - 'A']);
	}

	while (true)
	{
		int size = compatibility.size();

		if (size == 2)
		{
			break;
		}

		vector<int> tmp;
		for (int i = 0; i < size - 1; ++i)
		{
			tmp.emplace_back((compatibility[i] + compatibility[i + 1]) % 10);
		}
		compatibility = tmp;
	}

	cout << compatibility[0] << compatibility[1];
}
