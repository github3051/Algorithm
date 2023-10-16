#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int number;
    vector<int> score(5,0);
    for(int i=0;i<n; ++i)
    {
        cin >> score[i];
    }
    
    number = ((score[0] > score[2] ? (score[0]-score[2])*508 : (score[2]-score[0])*108) + (score[1] > score[3] ? (score[1]-score[3])*212 : (score[3]-score[1])*305) + (n == 5 ? score[4]*707 : 0))*4763;
    cout << number;
}