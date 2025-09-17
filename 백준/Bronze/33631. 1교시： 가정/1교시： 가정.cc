#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> currMaterial(4);
	vector<int> neededMaterial(4);
	for (int i = 0; i < 4; ++i)
		cin >> currMaterial[i];
	for (int i = 0; i < 4; ++i)
		cin >> neededMaterial[i];

	int q;
	cin >> q;
	int numCookies = 0;
	while (q--)
	{
		int n, i;
		cin >> n >> i;

		if (n == 1)
		{
			bool cannotMake = false;
			for (int j = 0; j < 4; ++j)
			{
				if (currMaterial[j] - neededMaterial[j]*i < 0)
				{
					cannotMake = true;
					break;
				}
			}


			if (cannotMake)
				cout << "Hello, siumii";
			else
			{
				numCookies += i;
				cout << numCookies;

				for (int j = 0; j < 4; ++j)
				{
					currMaterial[j] -= neededMaterial[j] * i;
				}
			}

		}
		else if (n == 2)
		{
			currMaterial[0] += i;
			cout << currMaterial[0];
		}
		else if (n == 3)
		{
			currMaterial[1] += i;
			cout << currMaterial[1];
		}
		else if (n == 4)
		{
			currMaterial[2] += i;
			cout << currMaterial[2];

		}
		else if (n == 5)
		{
			currMaterial[3] += i;
			cout << currMaterial[3];
		}
		cout << '\n';
	}

}