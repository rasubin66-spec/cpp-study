//vector는 크기가 늘어나는 배열 사용중 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10); // 10  // 뒤에서 추가하는 방식으로 저장 
    numbers.push_back(20); // 10 20
    numbers.push_back(30); // 10 20 30

    cout << numbers[0]<<endl;
    cout << numbers[1]<<endl;
    cout << numbers[2]<<endl;


    return 0;

}