#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    void sound(){
        cout << "Animal sound" << endl;
    }
};

class cat : public Animal{
public:
    void sound(){
        cout << "miawoo" << endl;
    }
};

int main(){
    Animal* a = new cat();

    a-> sound(); //어떤 sound인지 모르니까 포인터로 객체의 주소를 a에 저장하고 

    delete a;

    return 0;
}

//Animal* a; 객체 주소 저장 
//Animal* a = new dog(); Dop 객체를 하나 새로 만들고 그 주소를 a에 저장

