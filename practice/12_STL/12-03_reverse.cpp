// reverse()는 정렬을 하는 함수가 아니라, 현재 순서를 그대로 뒤집는 함수이기 때문이다.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> numbers = {1, 2, 3, 4, 5};

    reverse(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
} 

// 여기서 보면 reverse()는 정렬을 하는 함수가 아니라 , 현재 순서를 나타내는 함수