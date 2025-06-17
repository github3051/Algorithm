#include <iostream>
#include <list>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string input;
	cin >> input;
	list<char> listStr;
	for (const auto a : input)
		listStr.push_back(a);
	list<char>::iterator idxIter = listStr.end();
	
	int M;
	cin >> M;
	while (M--)
	{
		char tmp;
		cin >> tmp;
		if (tmp == 'L')
		{
			if (idxIter == listStr.begin())
				continue;
			idxIter--;
		}
		else if (tmp == 'D')
		{
			if (idxIter == listStr.end())
				continue;
			idxIter++;
		}
		else if (tmp == 'B')
		{
			if (idxIter == listStr.begin())
				continue;
			idxIter--;
			idxIter = listStr.erase(idxIter); // erase는 삭제한 위치의 iterator를 반환
		}
		else if (tmp == 'P')
		{
			char value; // getline보다 더 깔끔함
			cin >> value;
			listStr.insert(idxIter, value);
		}
	}

	for (const auto& a : listStr)
		cout << a;
	return 0;
}