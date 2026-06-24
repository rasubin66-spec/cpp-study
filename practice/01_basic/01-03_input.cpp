#include <iostream>
using namespace std;

int main() { //프로그램의 시작점임
    int age; // 변수 설정
    
    cout << "나이를 입력하세요:"; // 이놈은 단순이 출력을 하는거임
    cin >> age; // 그러면 age라는 변수에 입력받은걸 씀  >>  이게 오른쪽 변수에 넣어달라는 뜻

    cout << "입력한 나이: " << age << endl; //여기서 문자 중간에 줄바꿈을 하는 경우는 \n으로 표시 ex) cout << "Hello\nWorld"

    return 0;// 프로그램의 정상작동할때 

}