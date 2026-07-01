#include <iostream>
using namespace std;

int main() {
    string s;

    getline(cin,s);

    int pos = s.find("c++"); //find를 쓰면 가장 앞자리인 c부터 쓰는 것임 즉

    cout << pos << endl;

    return 0;


}

// string::npos는 찾는 문자열이 없을때 반환된느 값임 