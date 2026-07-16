#include <iostream>
using namespace std;

int arr[3];

void backtrack(int depth){
    if(depth == 2){
        cout << arr[0]<< ' ' << arr[1] << endl;
        return; // RMxsodi gkslRK
    }

    for(int i = 1; i<=3 ;i++){
        arr[depth] = i; //이후에 배열값 설정해야겠지
        backtrack(depth+1);
    }
}

int main(){
    backtrack(0); // 함수 안에 출력이 있으니까 이거는 이렇게만 써도 되는거지

    return 0;
}