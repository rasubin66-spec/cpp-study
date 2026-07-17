#include<iostream>
using namespace std;


int n , m;

int arr[101];

void backtrack(int depth){
    if (depth == m){ // 여기 바로 아래에서 return해버리면 그냥 아랫 코드들이 실행이 안되어 버리지
        for(int i = 0 ; i<m ; i++){
            cout << arr[i] << ' ' ;
        }
        cout<<endl;
        return ;
    }

    for(int i = 1 ; i<n+1 ; i++){
        arr[depth] = i;
        backtrack(depth+1);
    }

}

int main(){
    cin >> n >> m;

    backtrack(0);

    return 0;
}