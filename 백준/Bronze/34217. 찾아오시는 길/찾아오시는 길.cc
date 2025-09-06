#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int h = a + c;
	int y = b + d;

	if (h == y)
		cout << "Either";
	else if(h > y)
		cout << "Yongdap";
	else if(h < y)
		cout << "Hanyang Univ.";
}
