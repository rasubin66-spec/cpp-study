#include<iostream>
using namespace std;

int n , m;

int arr[101];

void backtrack(int depth, int start){
    if (depth == m){ // 여기 바로 아래에서 return해버리면 그냥 아랫 코드들이 실행이 안되어 버리지
        for(int i = 0 ; i<m ; i++){
            cout << arr[i] << ' ' ;
        }
        cout<<endl;
        return ;
    }

    for(int i = start ; i<n+1 ; i++){
        arr[depth] = i; // 바보야 계속 i가 반복문으로 돌아가야하는데
        backtrack(depth+1, i+1); //만약에 1, 2, @ 를 정확하게 출력해도 1 , 3, 에서 현재 start가 1에서 2로 변하는 시점이라 1, 3,  2를 출력해버릴 수 있다는게 문제임 
    }

}

int main(){
    cin >> n >> m;

    backtrack(0,1);

    return 0;
}