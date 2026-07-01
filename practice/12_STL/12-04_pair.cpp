#include <iostream>
#include <utility>
using namespace std;

// pair는 두개의 값을 하나로 묶어주는 자료형이다.
// pair<자료형1, 자료형2> 변수명; 이런식으로 선언하면 된다.
// 딱 두개의 값만 묶을 수 있다.

//class나 struct를 이용해서 여러개의 값을 묶을 수도 있지만, pair는 딱 두개의 값만 묶을 수 있다는 점에서 차이가 있다.


int main() {

    pair<string, int> student;

    student.first = "승빈";
    student.second = 95;

    cout << student.first << endl;
    cout << student.second << endl;

    return 0;


}
// pair는 정렬로 쓰면 첫번쨰 값으로 정렬한다.
