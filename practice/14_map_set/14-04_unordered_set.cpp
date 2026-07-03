//set
//→ 중복 제거
//→ 자동 오름차순 정렬

//unordered_set
// → 중복 제거
// → 정렬 안 됨
// → 보통 더 빠름

// 즉 unordered 시리즈는 정렬을 안해주지만 그 정렬안해주는 시간을 줄여서 더 찾기 쉽게 만들어줌

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(1);

    for (auto x : s){
        cout << x << " ";
    }

    return 0;
}