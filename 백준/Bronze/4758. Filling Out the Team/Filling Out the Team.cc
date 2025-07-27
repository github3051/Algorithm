#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct spec
{
	string name;
	double speed;
	int weight;
	int strength;
};

int main()
{
	int n = 3;
	vector<spec> sVec = { {"Wide Receiver",4.5,150,200},{"Lineman",6.0,300,500},{"Quarterback",5.0,200,300} };
	while (true)
	{
		double s;
		int w, st;
		cin >> s >> w >> st;
		if (s == 0 && w == 0 && st == 0)
			break;

		bool noPosition = false;
		for (int i = 0; i < n; ++i)
		{
			if (sVec[i].speed >= s && sVec[i].weight <= w && sVec[i].strength <= st)
			{
				cout << sVec[i].name << ' ';
				noPosition = true;
			}
		}
		cout << (!noPosition? "No positions" : "") << '\n';
	}
}