#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10,20,30};

    cout << arr << endl; //연속된 배열의 선두를 가리킴 
    cout << &arr[0] << endl; // 위엣줄과 같은 의미를 지님 

    cout << *arr << endl; //arr 자체가 첫 번째 칸의 주소처럼 동작하니까, *arr은 그 주소로 가서 값을 꺼내라는 뜻이다.
    cout << *(arr + 1) << endl; // arr[1] = 20
    cout << *(arr + 2) << endl; // arr[2] = 30 이렇게 +1 씩 증가시면서 바꿀수있음 

    return 0 ;

}