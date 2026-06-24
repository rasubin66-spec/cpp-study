#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "나이를 입력하세요: ";
    cin >> age;

    if (age >= 20) {
        cout << "성인입니다." << endl;
    }
    else {
        cout << "미성년자입니다." << endl;
    }

    return 0;
}