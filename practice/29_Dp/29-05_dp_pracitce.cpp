#include <iostream>
using namespace std;

int dp[101];

int main(){
    int n;
    cin >> n;

    dp[0] = 1; // 아무것도 안하는 방법이 1임을 기억하자 

    for(int i = 1; i<=n ; i++){
        if(i-2>=0){
            dp[i] += dp[i-2];
        }

        if(i-3>=0){
            dp[i] += dp[i-3];
        }
    }

    cout << dp[n];

    return 0;
}