#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<string> material(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> material[i];
	}

	vector<bool> useMaterial(n, false);
	for (int i = 0; i < n - 1; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < n; ++j)
		{
			if (str == material[j])
			{
				useMaterial[j] = true;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (useMaterial[i] == false)
		{
			cout << material[i];
			break;
		}
	}
}