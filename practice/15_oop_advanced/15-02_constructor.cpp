#include <iostream>
#include <string>
using namespace std;

class student {

public:
    string name;
    int age;

    student(string name, int age){// 생성자는 특별한 함수라 void를 붙이면 절대 안됨 그러면 그냥 일반 함수로 인식해버림
        this->name = name;
        this->age = age;
    }

    void print(){
        cout << name << endl;
        cout << age << endl;
    }
};

int main(){
    student s("kim",20); //객체를 생성함 

    s.print();

    return 0;



    

    
}





