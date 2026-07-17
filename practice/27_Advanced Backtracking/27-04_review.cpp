#include<iostream>
using namespace std;

int arr[101];

int n, m;

void backtrack(int depth, int start){
    if(depth == m){
        for(int i = 0; i<m; i++){
            cout << arr[i] << ' ';
        }
        cout << endl;
        return ;
    }

    for(int i = start; i <= n; i++){
        arr[depth] = i;
        backtrack(depth + 1, i + 1); // i+1로 하는 이유는 i가 앞의 값이기에 결국에는 i보다는 커야함 마치 이중포문에서 j = i+1 하고 마찬가지 인 개념임 
    }
}

int main(){
    cin >> n >> m;

    backtrack(0,1);

    return 0;
}