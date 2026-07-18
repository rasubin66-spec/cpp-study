#include<iostream>
using namespace std;

int n ,m, target ;

int count = 0;

int arr[101] ;

void backtrack(int depth, int start, int sum){
    if(depth==m){
        if(target == sum){
            count ++;
        }
        return ;
    }

    for(int i = start; i<=n ;i++){
        arr[depth] = i;
        backtrack(depth+1, i+1 , sum+i);
    }
}

int main(){
    cin >> n >> m >> target;

    backtrack(0,1,0);

    cout << count;

    return 0;
}