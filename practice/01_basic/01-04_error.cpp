#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "나이를 입력해주세요"<< endl;
    cin >> age;

    if (age<0) { // 잘못되었을 경우 오류를 출력하는 파트 
        cout << "잘못된 입력입니다." << endl;
        return 1; 

    }

    cout << "입력한 나이:"<<age<<endl;

    return 0;
}