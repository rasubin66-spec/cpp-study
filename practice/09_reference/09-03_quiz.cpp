#include <iostream>
using namespace std;

class Character 
{
private:
    int hp;

public:
    string name;

    Character(int h, string n){
        hp = h;
        name = n;
    }

    void damage(int & attack){ // 여기서 참조는  사실 들어온 attack 값을 바꿀떄나 쓴느거지 

        

        hp -= attack;
        if (hp<0){
            hp = 0;
        }
        
    }
    
    void printInfo(){
        cout << hp << endl;
        cout << name << endl;
    }



};

int main(){
    Character c1(100,"warrier");

    int attack = 30;

    c1.damage(attack);

    c1.printInfo();

    return 0;

}
// int & attack 이면 reduceattack(a) a의 별명은 attack으로 자연스럽게 참조 형태로 바뀐다.