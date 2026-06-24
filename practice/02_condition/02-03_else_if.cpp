//else if 는 경우의 수가 3개 이상일때 쓰는 표현 
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age; // 항상 흐름은 위에서 부터 아래로 검사하는 패턴임

    if (age < 0) { // 0보다 아래이면 존재할수 없다고 뜸 
        cout << "Invalid age" << endl;
    }
    else if (age < 13) { // 0보다 크고 13보다 작으면
        cout << "Child" << endl;
    }
    else if (age < 20) {// 13에서 20보다 작으면 
        cout << "Teenager" << endl;
    }
    else { // 20보다 크면 
        cout << "Adult" << endl;
    }

    return 0;
}