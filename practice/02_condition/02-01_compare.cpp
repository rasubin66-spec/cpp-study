#include <iostream>
using namespace std;

int main(){
    int age = 24;

    cout << (age>20) <<endl;
    cout << (age<20) <<endl;
    cout << (age==24) <<endl;
    cout << (age!=24) <<endl;

    return 0;








  
}  // 이론적으로 true는 1, false는 0으로 출력됨 근데 이제 문자로 바꾸고 싶으면 cout << boolalpha; 이걸 쓰면됨 