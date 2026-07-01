//cin은 공백을 만나면 입력을 끝내버리는게 문제임 

#include <iostream>
using namespace std;

int main() {

    string name;

    getline(cin, name); // cin으로부터 한 줄을 읽어서 name에 저장해라 

    cout << name << endl;

    return 0;
}