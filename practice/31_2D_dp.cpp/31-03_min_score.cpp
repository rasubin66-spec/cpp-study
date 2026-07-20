#include<iostream>
#include<algorithm>
using namespace std;

int arr[101][101];
int dp[101][101];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1 ;i<=n ; i++){
        for(int j = 1; j<=m ;j++){
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];

    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=m ;j++){
            if(i==1 && j==1){
                continue;
            }
            if(i==1){
                dp[i][j] = dp[i][j-1] + arr[i][j];
            }
            else if(j == 1){
                dp[i][j] = dp[i-1][j] + arr[i][j];
            }
            else{
                dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + arr[i][j];
            }
        }
    }

    cout << dp[n][m];

    return 0;
}