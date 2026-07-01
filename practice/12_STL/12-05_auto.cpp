// auto는 자료형을 알아서 추론하겟금 하는 거다 
// ex) auto a = 10; // int a = 10; 이거랑 똑같음

#include <iostream>
#include <vector>
using namespace std;

int main() { 
    vector<int> numbers = {10, 20, 30};

    for (auto x : numbers){ // numbers 안에 있는 값을 앞에서 부터 하나씩 거내서 x에 넣고 반복한다. 이것을 범위 기반 for문이라고 한다.
        cout << x << " ";
    }
    return 0;
}