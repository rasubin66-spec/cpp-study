//replace(시작위치, 지울글자수, "새문자열")

#include <iostream>
using namespace std;

int main() {
    string s = "I like Java";

    s.replace(7, 4, "C++");

    cout << s << endl;

    return 0;
}