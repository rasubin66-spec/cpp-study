#include <iostream>
using namespace std;

int main() {
    char data[2001];
    fgets(data, 2000, stdin); // 공백이 포함되어있는 문자를 받을 수 있따 

    cin >> data;

    cout << data;


}