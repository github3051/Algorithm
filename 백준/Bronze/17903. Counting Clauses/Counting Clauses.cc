#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    
    int tmp;
    for(int i=0; i<n*m; ++i)
    {
        cin >> tmp;
    }
    
    //vector<vector<int>> arr(n,vector<int>(m,0));
    
    //for(int i = 0; i < n; i++)
    //{
    //    for(int j = 0; j < m; j++)
    //    {
    //        cin >> arr[i][j];
    //    }
    //}
    
    if(n >= 8)
    {
        cout << "satisfactory";
    }
    else
    {
        cout << "unsatisfactory";
    }
}