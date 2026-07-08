#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {5, 1, 4, 2, 3};

    sort(v.begin(), v.end());
}

//sort는 여러 번 나누고, 다시 비교하면서 정리한다
//N은:

//전체 원소들을 처리하는 양

//그래서 둘이 합쳐져서  O(N log N) 이다.

// 입력 제한 보고 시간 복잡도 고르기 

// 1 <= N <= 100000 이 말은 N이 최대 100000까지 들어올 수 잇다.
// 그럼 주요 논점 : 내 코드가 N이 100000일때도 버틸까??

// 최대 기준:  최대 실행 횟수가 대충 1억 번을 넘으면 위험하다. 가 핵심임 


