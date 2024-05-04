#include <iostream>
using namespace std;

int main()
{
	int timeLimit = 210; //second
	int start, n;
	cin >> start >> n;


	int time;
	char reply;
	for (int i = 0; i < n; ++i)
	{
		cin >> time >> reply;
		timeLimit -= time;
        
		if (timeLimit < 0)
		{
			break;
		}
        
		if (reply == 'T')
		{
			start += 1;
		}

		if (start >= 9)
		{
			start = 1;
		}

	}
	cout << start;
}