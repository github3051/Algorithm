#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	vector<double> vec = {13,7,5,3,3,2};


	double cho = 0;
	double han = 1.5;

	for (int i = 0; i < 6; ++i)
	{
		int tmp;
		cin >> tmp;
		cho += vec[i] * tmp;

	}

	for (int i = 0; i < 6; ++i)
	{
		int tmp;
		cin >> tmp;
		han+= vec[i] * tmp;
	}

	cout << (han > cho ? "ekwoo" : "cocjr0208");
}