#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int dp[101];

    for(int i = 0; i<=n ;i++){
        dp[i] = 999999;
    }

    dp[0] = 0;

    for(int i = 2 ; i<=n ; i++){
        if(i-2>=0){
            dp[i]=min(dp[i],dp[i-2]+1);
        }

        if(i-3>=0){
            dp[i]=min(dp[i],dp[i-3]+1);
        }
    }

    if(dp[n]==999999){
        return -1;
    }
    else{
        cout << dp[n];
    }

    return 0;
}

//그 전단계 최소에서 1칸 더 더한게 그 값의 최소가 되는 구조이겠지.