#include <iostream>
using namespace std;

int main(){
    int a = 10;

    int *p = &a; // a의 주소를 나타내고(메모리) 그걸 p에 주소를 저장해라 

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;

    return 0;

}