#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void Print(const int& num)
{
	switch (num)
	{
		case 1:
			cout << "Yakk ";
			break;

		case 2:
			cout << "Doh ";
			break;

		case 3:
			cout << "Seh ";
			break;

		case 4:
			cout << "Ghar ";
			break;

		case 5:
			cout << "Bang ";
			break;

		case 6:
			cout << "Sheesh ";
			break;
	}
}

void EPrint(const int& num)
{
	switch (num)
	{
	case 1:
		cout << "Habb Yakk ";
		break;

	case 2:
		cout << "Dobara ";
		break;

	case 3:
		cout << "Dousa ";
		break;

	case 4:
		cout << "Dorgy ";
		break;

	case 5:
		cout << "Dabash ";
		break;

	case 6:
		cout << "Dosh ";
		break;
	}
}


int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int a, b;
		cin >> a >> b;
		cout << "Case " << i << ": ";
		if ((a == 5 && b == 6) || (a == 6 && b == 5))
		{
			cout << "Sheesh Beesh";
		}
		else if (a == b)
		{
			EPrint(a);
		}
		else if(a < b)
		{
			Print(b);
			Print(a);
		}
		else if (a > b)
		{
			Print(a);
			Print(b);
		}

		cout << '\n';
	}
}