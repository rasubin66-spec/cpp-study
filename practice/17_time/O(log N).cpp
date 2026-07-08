//O(log N)은 절반씩 줄이면서 찾는 것임 
// 예를 들어 1, 3, 5, 7, 9면 7을 찾는다고 하면 5의 왼쪽은 버리고 5의 오른 쪽에서 다시 찾는 방식으로 진해되는 것이다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9, 11, 13, 15};

    bool found = binary_search(v.begin(),v.end(),11);

    cout << found << endl;

    return 0;
}