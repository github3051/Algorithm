#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    while (true) 
    {
        int S, B;
        cin >> S >> B;

        // 종료 조건 (0 0 입력)
        if (S == 0 && B == 0) 
            break;

        // 병사 목록 초기화 (1 ~ S)
        list<int> soldiers;
        vector<list<int>::iterator> positions(S + 1);

        for (int i = 1; i <= S; ++i) {
            soldiers.push_back(i);
            positions[i] = prev(soldiers.end()); // 각 병사의 반복자 저장
        }

        for (int i = 0; i < B; ++i) {
            int L, R;
            cin >> L >> R;

            // L과 R의 반복자 가져오기
            auto itL = positions[L], itR = positions[R];
            ++itR; // R을 포함하여 삭제해야 하므로 오른쪽 한 칸 이동

            // 왼쪽 생존 병사 찾기
            if (itL == soldiers.begin()) cout << "* ";
            else cout << *prev(itL) << " ";

            // 오른쪽 생존 병사 찾기
            if (itR == soldiers.end()) cout << "*\n";
            else cout << *itR << "\n";

            // 병사 삭제
            soldiers.erase(itL, itR);
        }

        cout << "-\n";  // 테스트 케이스 종료 표시
    }

    return 0;
}