#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void setName(string name){
        this->name = name;
    }

    

};
// 그니까 결국 함수변수 매개변수 둘다있지만 맴 나미작에 매개변수이기떄문에 다 같은걸로 통일해버린다는 


int main(){
    Student s1;

    s1.setName("kim");

    cout << s1.name;

    return 0;
}

//이름이 같으면 멤버 변수와 매개변수를 자동으로 구분해주지 않는다. 함수 안에서는 가장 가까운 매개변수를 우선 사용한다.