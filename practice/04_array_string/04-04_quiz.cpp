#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    for(int i = 0; i<5; i++){
        cout << "숫자를 입력해주세요:";
        cin >> arr[i];
    }

    for(int i = 0; i<5; i++){
        cout << arr[i] <<endl;
    }

    for(int i = 0; i<5; i++){
        sum += arr[i];
    }
    cout << sum <<endl; // 최종합만 따지기 


    return 0;





}


