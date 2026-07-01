// 코테에 엄청 많이 쓰임 
//substr는 문자열의 일부를 잘라오는 함수 

//s.substr(0,5) 0번부터 5글자 라는 소리임  0부터 5까지가 절대 아님
// stirng email = "abc@gmail.com" ;
// cout << email.substr(4) ---> 이런식으로 2번쨰 인자를 안써버리면 인덱스 4번부터 끝까지 센다는 내용임 제일 코테에서 많이 나오는 형태

#include <iostream>
using namespace std;

int main() {

    string s = "Hello world";

    cout << s.substr(0,5) << endl; //Hello
    cout << s.substr(6,5) << endl; //world

    return 0;

}