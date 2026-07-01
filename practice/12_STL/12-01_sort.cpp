// sort(numbers.begin(), numbers.end(), greater<int>()); <---- 이거는 내림차순임 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 1, 3};

    sort(numbers.begin(), numbers.end()); // 그 실제 위치를 가리킴으로서 표현 즉 데이터의 위치를 표현한 것이고 *numvers.begin() 이거는  그 위치의 값을 나타내는것 

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
