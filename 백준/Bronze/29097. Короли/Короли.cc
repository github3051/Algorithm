#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Army
{
	string king;
	int soldiers;
};

bool Compare(const Army& a, const Army& b)
{
	if (a.soldiers == b.soldiers)
	{
		return a.king < b.king;
	}
	return a.soldiers > b.soldiers;
}

int main()
{
	vector<Army> army(3);
	army[0].king = "Joffrey";
	army[1].king = "Robb";
	army[2].king = "Stannis";
	int n, m, k, a, b, c;
	cin >> n >> m >> k >> a >> b >> c;
	army[0].soldiers = n * a;
	army[1].soldiers = m * b;
	army[2].soldiers = k * c;
	sort(army.begin(), army.end(), Compare);

	for (const auto& elem : army)
	{
		if (elem.soldiers == army[0].soldiers)
		{
			cout << elem.king << ' ';
		}
	}
}