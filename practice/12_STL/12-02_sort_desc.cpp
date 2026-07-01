#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 1, 3};

    sort(numbers.begin(), numbers.end(), greater<int>()); // 이거는 내림차순뜻

    for (int i = 0; i < numbers.size(); i++) { // 그리고 백터라는 배열이니까 size()를 쓰는 것임
        cout << numbers[i] << " ";
    }

    return 0;
}