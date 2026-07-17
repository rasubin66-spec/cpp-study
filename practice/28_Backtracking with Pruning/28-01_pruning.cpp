#include <iostream>
using namespace std;

int n , m, target;
int arr[101];
int answer = 0 ;

void backtrack(int depth, int start, int sum){
    if(sum>target){
        return ;
    }

    if(depth==m){
        if(sum == target){
            answer++
        }
        return ;
    }

    for(int i = start; i<=n ; i++){
        arr[depth] = i;
        backtrack(depth+1, i+1, sum+i);// 생각해보니 start라 원래보다 1 커야하는게 당연한 것임 
    }
}

int main(){
    cin >> n >> m >> target ;

    backtrack(0,1,0); // 해서 해당값으로 answer값을 정해버리고 

    cout << answer ; //answer 출력

    return 0;
}