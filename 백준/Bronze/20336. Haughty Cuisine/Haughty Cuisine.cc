#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ansN = 0;
    vector<string> ansStr;

    for (int i = 0; i < n; ++i)
    {
        int d;
        cin >> d;

        if (i == 0)
        {
            ansN = d;
            ansStr.clear();
            for (int j = 0; j < d; ++j)
            {
                string sTmp;
                cin >> sTmp;
                ansStr.push_back(sTmp);
            }
        }
        else
        {
            for (int j = 0; j < d; ++j)
            {
                string sTmp;
                cin >> sTmp;
            }
        }
    }

    cout << ansN << '\n';

    for (const auto& elem : ansStr)
    {
        cout << elem << '\n';
    }
}