#include <iostream>
using namespace std;
int sum = 0;

int sumNumber(int n){
    if(n==0){
        return sum;
    }
    sum += n;
    return sumNumber(n-1); //이게 int이기 때문에 return해주는 값이 필요한데 이게 여기에 해당하는 부분임 
}

int main(){ // 값을 계산해서 돌려주는 것일 뿐이지 뭔가를 출력해주는게 아님 조심하자

    cout << sumNumber(5); // 출력을 안해주는 문제 <-- 여기처럼 출력해야함 

    return 0;
}

int sumNumber2(int n){
    if(n==1){
        return 1; //마지막에 5+4+3+2+sumNumber2(1)이여서 return 을 1로 해줌 
    }

    return n + sumNumber2(n-1);
}

int main(){
    cout << sumNumber2(5);
}