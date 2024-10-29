#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin.ignore();
		getline(cin, str);

		int len = str.length();

		string tmp, ans = "god";
		int nBlank = 0;
		bool isBlank = false;
		
		for (int i = 0; i < len; ++i)
		{
			if (str[i] == ' ')
			{
				nBlank += 1;
			}
			else
			{
				tmp += str[i];
			}
			
			if (nBlank == 1 && isBlank == false)
			{
				tmp = "";
				isBlank = true;
			}
			else if(nBlank >= 2)
			{
				ans += tmp;
				tmp = "";
			}
			
		}

		if (nBlank == 1)
		{
			ans += tmp;
		}

		cout << ans << '\n';
	}
}