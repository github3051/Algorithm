#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,a,b;
	cin >> n >> a >> b;
	int d = b- a;
	int ans = b;
	for (int i = 0; i < n - 2; ++i)
	{
		int tmp;
		cin >> tmp;
		ans = tmp;
	}
	cout << ans + d; 
}