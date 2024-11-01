#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int n, sys_n;
	cin >> n >> sys_n;
	

	bool isSample = true;
	bool isSystem = true;
	for (int i = 0; i < n; ++i)
	{
		int correct, myAns;
		cin >> correct >> myAns;

		if (correct != myAns)
		{
			isSample = false;
		}
	}

	for (int i = 0; i < sys_n; ++i)
	{
		int correct, myAns;
		cin >> correct >> myAns;

		if (correct != myAns)
		{
			isSystem = false;
		}
	}

	if (isSample && isSystem)
	{
		cout << "Accepted";
	}
	else if (isSample && !isSystem)
	{
		cout << "Why Wrong!!!";
	}
	else if (!isSample)
	{
		cout << "Wrong Answer";
	}
}