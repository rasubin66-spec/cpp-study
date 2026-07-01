#include <iostream>
using namespace std;

//size()는 컨테이너 크기 length()는 문자열 길이라는 표현 

int main() {
    string s;

    getline(cin,s);

    cout << s.length() << endl ;
    cout << s.size() << endl ;

    return 0;
}