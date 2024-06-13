// 이진수의 곱셈은 2단위 곱셈이 유의미 하다는것을 알고있다는게 포인트이다.
// 이진수에 2를 곱하면 뒤에 0, 4를 곱하면 00, 8을 곱하면 000, 16을 곱하면 0000.... 이 된다.
// 여기서는 17을 곱해야 하므로 기존수에 (16+1)을 곱하면 된다.
// 즉, 기존수 뒤에 0000을 붙이고 거기에 다시 자기 자신을 더하면 된다.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	string str16 = str + "0000";
	str = "0000" + str;
	int sLen = str.length();

	for (int i = sLen - 1; i >= 0; --i)
	{
		str16[i] = (((str16[i] - '0') + (str[i] - '0')) + '0');
		if (str16[i] >= '2')
		{
			if (i != 0)
			{
				str16[i - 1] = (((str16[i - 1] - '0') + 1) + '0');
				str16[i] = (((str16[i] - '0') - 2) + '0');
			}
			else
			{
				str16[i] = (((str16[i] - '0') - 2) + '0'); // 순서 중요
				str16 = "1" + str16;
			}
		}
	}

	cout << str16;
}
