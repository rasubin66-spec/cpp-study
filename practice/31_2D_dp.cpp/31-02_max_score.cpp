#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][101]; // 전역 변수니까 다 0으로 설정해주는거였지

int arr[101][101];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i<n+1 ; i++){
        for(int j = 1; j<m+1; j++){
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];

    for(int i=1; i<=n ;i++){
        for(int j = 1; j<=m ;j++){
            if(i==1 && j==1){
                continue;
            }
            dp[i][j] = max({dp[i-1][j]+arr[i][j],dp[i][j-1]+arr[i][j], dp[i-1][j-1]+arr[i][j]}); // 그전까지의 전체 합 더하기 현재 칸을 해야지 그 전의 칸을 해버리면 안되지
        }
    }

    cout << dp[n][m];

    return 0;
}

//dp 안에서는 시작점을 박아놓는게 안전함 그래서 항상 시작점을 쓴느 습관을 들이면 좋음
//max 로 3개를 비교하려면 max(a,b)가 아니라 max({a, b, c})가 되어야함 