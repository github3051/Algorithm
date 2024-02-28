#include <iostream>
using namespace std;

int main()
{  
  int testCases, n, s, d, ans;
  cin >> testCases;
  for(int i = 1; i <= testCases; i++)
  {
    cin >> n >> s >> d;
    ans = 0;
    for(int j = 0, a, b; j < n; j++)
    {
      cin >> a >> b;
      if(s * d >= a) ans += b;
    }
    cout << "Data Set " << i <<":\n" << ans << '\n' << '\n';
  }
}