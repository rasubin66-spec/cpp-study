#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;
    double score;

    void printInfo(){ // 데이터를 어떻게 가질지 + 그 데이터로 무슨 행동을 할지 묶는 설계도임 
        cout << name << endl;
        cout << age << endl;
        cout << score << endl;

    }
};

int main(){ // 여기서는 값을 넣고 어떻게 실행하는지에 대해서 다룸
    student s1; // 학생 객체를 만든것 

    s1.name = "승빈"; // 그래서 학생 객체의 데이터 값 삽입함 
    s1.age = 24;
    s1.score = 4.2;

    s1.printInfo();

    return 0 ;

}


