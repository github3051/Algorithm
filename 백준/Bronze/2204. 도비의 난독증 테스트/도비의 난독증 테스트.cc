// 입력받아서 컨테이너에 넣을 때, z보다 크면 26을 빼서 넣는다. (즉, 대문자로만 저장한다)
// 다만, 원래 글자를 출력해야되기 때문에 당연히 원래 글자도 따로 저장해둬야된다.
// 나는 pair<std::string, std::string>을 이용해서 저장할 생각이다.

#include <iostream>
#include <vector>
#include <algorithm> // sort
using namespace std;

bool Compare(const pair<string, string>& a, const pair<string, string>& b)
{
	return a.second < b.second;
}


int main()
{
	int n;
	std::vector<pair<string, string>> word;
	word.reserve(1000);
	std::string str1, str2;
	int len;
	while (true)
	{
		std::cin >> n;
		if (n == 0)
		{
			break;
		}

		for (int i = 0; i < n; ++i)
		{
			std::cin >> str1;
			str2 = str1;
			len = str2.length();
			for (int j = 0; j < len; ++j)
			{
				if (str2[j] > 'Z')
				{
					str2[j] = str2[j] - 'a' + 'A';
				}
			}
			word.push_back({ str1,str2 });
		}
		std::sort(word.begin(), word.end(), Compare);
		std::cout << word[0].first << '\n';
		word.clear();
	}
}

// 소문자와 대문자 사이에 아스키코드가 더 껴있다. 때문에 단순히 알파벳개수로 빼면 안된다.