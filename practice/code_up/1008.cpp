#include <iostream>
using namespace std;

int main() {
    cout << "\u250C\u252C\u2510" << endl;
    cout << "\u251C\u253C\u2524" << endl;
    cout << "\u2514\u2534\u2518"; // --->  // 역슬래시는 따옴표, 줄바꿈, 유니코드 문자처럼 특수한 표현을 나타낼 때 사용한다.
    return 0;

    //이런식으로 유니코드 번호에 해당하는 특수문자를 출력할 수 있다는 개념이 중요한거다 
}