#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9};

    auto it = lower_bound(v.begin(), v.end(), 5);

    cout << *it ;

    //lower_bound는 몇이상이 있는 배열중에서 가장 첫번째값 그래서 5의 주소값을 반환함 
    //lower_bound가 값을 찾는 함수라기보다 "위치를 알려주는 함수"
    //그리고 이거를 쓰려면 반드시 오름차순 정렬이 되어있어야함 
}