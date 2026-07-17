#include <iostream>
using namespace std;

int arr[101];
int n , m;

void backtrack(int depth, int start){
    if(depth == m){
        for(int i = 0; i<m; i++){
            cout  << arr[i] << ' ';
        }
        cout << endl;

        return;
    }

    for(int i = start; i<=n ; i++){ // 계속 start값이 바뀌는데 왜 1로 고정함??
        arr[depth] = i;
        backtrack(depth+1, i);
    }
}


int main(){
    cin >> n >> m;

    backtrack(0,1);

    return 0;
}