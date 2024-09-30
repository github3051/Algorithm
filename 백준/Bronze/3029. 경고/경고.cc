#include <iostream>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	int h1 = (str1[0] - '0') * 10 + (str1[1] - '0'), m1 = (str1[3] - '0') * 10 + (str1[4] - '0'), s1 = (str1[6] - '0') * 10 + (str1[7] - '0');
	int h2 = (str2[0] - '0') * 10 + (str2[1] - '0'), m2 = (str2[3] - '0') * 10 + (str2[4] - '0'), s2 = (str2[6] - '0') * 10 + (str2[7] - '0');
	int ansHour = h2 - h1;
	int ansMinute = m2 - m1;
	int ansSecond = s2 - s1;

	if (ansSecond < 0)
	{
		ansSecond += 60;
		ansMinute -= 1;
	}

	if (ansMinute < 0)
	{
		ansMinute += 60;
		ansHour -= 1;
	}

	if (ansHour < 0)
	{
		ansHour += 24;
	}
     
    if(ansHour == 0 && ansSecond == 0 && ansMinute == 0)
    {
        cout << "24:00:00";
        return 0;
    }

	//print
	if (ansHour < 10)
	{
		cout << '0' << ansHour;
	}
	else
	{
		cout << ansHour;
	}

	cout << ':';

	if (ansMinute < 10)
	{
		cout << '0' << ansMinute;
	}
	else
	{
		cout << ansMinute;
	}
	
	cout << ':';

	if (ansSecond < 10)
	{
		cout << '0' << ansSecond;
	}
	else
	{
		cout << ansSecond;
	}
}