#include <iostream>
#include <algorithm> // sort

int main()
{
	std::string str1, str2;
	int idx = 1;
	while (true)
	{
		std::cin >> str1 >> str2;

		//exit
		if (str1 == "END" && str2 == "END")
		{
			break;
		}

		std::sort(str1.begin(), str1.end());
		std::sort(str2.begin(), str2.end());

		std::cout << "Case " << idx << ": ";
		if (str1 == str2)
		{
			std::cout << "same\n";
		}
		else
		{
			std::cout << "different\n";
		}
        idx += 1;
	}
}

// string은 vector<string>뿐아니라 string 자체적으로도 sort가 됨. 똑같이 iterator를 활용함.