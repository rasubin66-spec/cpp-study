#include <iostream>
#include <algorithm>
using namespace std;


int dp[101];

void dp1(int n){
    for(int i = 1; i<=n ; i++){
        dp[i]=99999999;
    }
    dp[1] = 0;

    for(int i =2; i<=n ;i++){
        dp[i] = dp[i-1]+1;
        if(i%2==0){//else if로 쓰면 진짜 최소후보일수도 있는 놈을 검사 안하고 걸러버림 
            dp[i]=min(dp[i],dp[i/2]+1);
        }

        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
    }

    cout << dp[n];
}

int main(){
    int x;
    cin >> x;

    dp1(x);

    return 0;
}

// 도대체 i*2 해서 n가는 것하고 i*3해서 n가는 것은 생각해도 i+1해서 n가근ㄴ 것은 왜 생각을 못한걸까?? 