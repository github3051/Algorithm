#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

std::string addBigNumbers(std::string num1, std::string num2) 
{
	int len1 = num1.length();
	int len2 = num2.length();

	if (len1 > len2)
		std::swap(num1, num2);

	std::reverse(num1.begin(), num1.end());
	std::reverse(num2.begin(), num2.end());

	std::string result = "";
	int carry = 0;

	for (int i = 0; i < len1; ++i) 
	{
		int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
		result.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	for (int i = len1; i < len2; ++i) 
	{
		int sum = (num2[i] - '0') + carry;
		result.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	if (carry)
		result.push_back(carry + '0');

	std::reverse(result.begin(), result.end());

	return result;
}


int main()
{
	string dp[491];
	dp[1] = '1';
	dp[2] = '1';

	for (int i = 3; i < 491; ++i)
	{
		dp[i] = addBigNumbers(dp[i - 2],dp[i-1]);
	}

	int hour;
	while (true)
	{
		cin >> hour;
		if (hour == -1)
		{
			break;
		}

		cout << "Hour " << hour << ": " << dp[hour] << " cow(s) affected\n";
	}
}

// C++에서는 기존 자료형으로는 피보나치 수열의 490항까지 구할 수 없다.
// 라이브러리를 추가하면 되지만, 백준에서는 지원하지 않아서 string으로 구해야된다.
// string으로도 5000항의 큰 숫자는 불가능하다.