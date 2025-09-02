#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a, b, c , ab;
	cin >> a >> b >> c;
    ab = a*b;
    if(ab >= 10*c)
    {
        cout << ab/(10*c);
        ab %= 10*c; // res대신 ab를 덮어씀
    }
	cout << setprecision(18) << fixed << (long double)ab / c << endl;
}