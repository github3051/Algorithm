#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void CalculateGrade(const int& score)
{
	if (score >= 97)
	{
		cout << "A+\n";

	}
	else if (score >= 90)
	{
		cout << "A\n";

	}
	else if (score >= 87)
	{
		cout << "B+\n";

	}
	else if (score >= 80)
	{
		cout << "B\n";

	}
	else if (score >= 77)
	{
		cout << "C+\n";

	}
	else if (score >= 70)
	{
		cout << "C\n";

	}
	else if (score >= 67)
	{
		cout << "D+\n";

	}
	else if (score >= 60)
	{

		cout << "D\n";
	}
	else
	{
		cout << "F\n";
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string name;
		int score;
		cin >> name >> score;
		cout << name << ' ';
		CalculateGrade(score);
	}
}