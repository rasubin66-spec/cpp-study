#include <iostream>
#include <string>
using namespace std;

class character{
public:
    string name;
    int hp;

    void printInfo(){
        cout << name << endl;
        cout << hp << endl;
    }
};

class Warrior : public character { //케릭터를 상속받는것이기 때문에 내가 안에있는 변수 함수를 다시 쓸 이유 x
public:
    void attack(){
        cout << name << "attacks!" << endl;
    }

};

int main(){
    Warrior w;

    w.name = "Knight";
    w.hp = 100;

    w.printInfo();
    w.attack();

    return 0;
}

//상속은 공통 기능 공유 및 중복을 제거함 예륻릉어 전사나 마법사나 hpㄴ,ㄴ 있기에 그거를 공톷 기능으로 빼놓음