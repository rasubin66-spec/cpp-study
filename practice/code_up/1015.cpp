#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float x ; // int는 정수 float는 실수이다.

    cin >> x; // 만약 이런식으로 있으면 실행했을떄 아무것도 안보이고 깜빡이는 것처럼 보임 

    cout << fixed << setprecision(2) << x; // setprecision(6)은 실수를 몇 자리까지 출력할지 정하는 C++ 출력 조작자야.
// 그리고 fixed << setprecision은 6자리까지 출력하라는 이야기
    return 0;
}