#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        if (s[i] != '-'){ // 작은 따옴표는 글자 하나일때 쓰는 것임 
            cout << s[i]; 

        }
    }

    return 0;

    


}


// 007 같은건 int로 출력이 불가능해서 string을 써야한다.