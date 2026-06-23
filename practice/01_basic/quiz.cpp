#include <iostream>
#include <string> // include int는 안해도됨 이게 c++ 언어의 기본자료형이기 때문임
using namespace std;

int main() {
    string name;
    int age;

    cout << "이름: " << endl; //여기서 endl은 필수는 아니고 그냥 보기좋으라고 있는거라고 생각하는게 훨씬 편함 
    cin >> name; //그리고 변수에 저장하는것임 

    cout << "나이:" << endl;
    cin >> age;

    if (age < 0 ){
        cout << "invalid age"<< endl;
        return 1;

    }

    cout << "hello," << name <<"!" <<endl;
    cout << "age:" << age << endl;

    return 0;


}