// 백트래킹이란?? 하나 선택하고 들어가 보고 끝나면 다시 돌아와서 다른 선택을 해보는 것임
#include <iostream>
using namespace std;

int n;

void backtrack(int depth){
    if(depth == n){
        cout <<"완성"<< endl;
    }

    cout << depth <<"번째 완성" << endl;

    backtrack(depth+1);
}

int main(){
    cin >> n;

    backtrack(0);

    return 0;
}

//재귀랑 다른점은 여기서 선택이란 요소가 들어가는 것임