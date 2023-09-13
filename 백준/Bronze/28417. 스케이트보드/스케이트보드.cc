#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    
    int tmp, ans = 0;
    std::vector<int> run(2);
    std::vector<int> trick(5);
    
    
    while(n--)
    {
        for(int i=0; i<2; ++i)
        {
            std::cin >> run[i];
        }
        
        for(int i=0; i<5; ++i)
        {
            std::cin >> trick[i];
        }
        
        std::sort(run.begin(), run.end());
        std::sort(trick.begin(), trick.end());
        
        tmp = run[1] + trick[3] + trick[4];
        
        if(tmp > ans)
        {
            ans = tmp;
        }
    }
    
    std::cout << ans;
}