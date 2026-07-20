#include<iostream>
#include<algorithm>
using namespace std;

int arr[101][101];
int dp[101][101];

int main(){
    int n , m;
    cin >> n >> m;

    for(int i = 1 ; i<= n; i++){
        for(int j = 1; j<=m ; j++){
            cin >> arr[i][j];
        }
    }

    if(arr[1][1] == -1){
        cout << -1;
        return 0;
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            dp[i][j] = -100000; // 이걸 쓰는 이유는 밖에서 들어오는것 을 막으려고 그런거임 
        }
    }

    dp[1][1] = arr[1][1];

    for(int i = 1 ; i<= n; i++){
        for(int j = 1; j<=m; j++){
            if(i == 1 && j == 1){
                continue;
            }

            if(arr[i][j] == -1){
                dp[i][j] = -100000;
                continue; // 장애물은 갈 수 없어서 continue해야되는데 왜 까먹니
            }

            dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + arr[i][j];
            if(dp[i][j-1] == -100000 && dp[i-1][j] == -100000){
                dp[i][j]= -100000;
            }
        }
    }
    if(dp[n][m] == -100000){
        cout << -1;
    }
    else{
        cout << dp[n][m];
    }
    return 0;
}