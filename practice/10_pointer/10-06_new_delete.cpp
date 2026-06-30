#include <iostream>
using namespace std;

// int* arr = new int[n] ;
// 1. new int[n] heap에 int n개 짜리 배열을 만든다 그리고 그 배열의 첫번째 칸 주소를 돌려준다 
//2 . int *arr 그 주소를 저장해줄 변수 arr를 만든다 

int main() {
    int n;
    cin >> n;

    int *arr = new int[n]; // 여기는 이름이 없기 때문에 배열을 다시 찾아가려면 시작 주소를 붙잡아야만 함 그래서 주소를 설정해둔거 

    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0 ; i < n; i++){
        cout << arr[i];
    }

    delete[] arr; 
}