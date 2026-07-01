#include <iostream>
using namespace std;

int main(){
    string s = "Hello World";

    s.erase(5,1);

    cout << s << endl;

    return 0 ;

}

//문자열.erase(시작위치, 글자수);
//빈칸도 글자 수로 책정해서 지울수 있다는거에 유념 


int main(){

    string s = "HelloWorld";

    s.insert(5," ");

    cout << s << endl;

    return 0;
}
//문자열.insert(위치, "삽입할 문자열");
//insert(위치, 문자열)은 그 위치를 강제로 벌리고, 그 사이에 새 문자열을 끼워 넣는 거임 