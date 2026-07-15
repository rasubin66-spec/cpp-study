#include <iostream>
using namespace std;

void printnumber(int a){
    if (a==0){
        return; // return 자체가 함수자체를 끝내는거임 
    }

    cout << a << endl;

    printnumber(a-1);
}

void printnumber2(int b){
    if (b==0){
        return;
    }

    printnumber2(b-1); // 이 순서를 바꿧을 뿐인데 역순으로 출력됨 왜냐?? 처음실행된 함수가 함수 전체를 실행시키지 못하고 재귀되기에 나중에 멈쳤을때 바로 전에 멈췄던 함수가 돌아가면서 처음에 돌아갔던거는 맨 마지막에 출력

    cout << b << endl;  
}



int main(){
    printnumber2(5);

    return 0;
}