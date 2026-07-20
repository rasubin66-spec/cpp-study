#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[101];
int sum_score[101];
int count = 0;

void dp(int n){
    for(int i = 1; i<n ; i++){
        sum_score[i] = -99999;  // 여기에도 정수 범위라는게 있어서 무지 막지 하게 크게 써버리면 안됨
    }

    sum_score[0] = 0;

    for(int i =1; i<=n ; i++){
        if(i-1>=0){
            sum_score[i] = max(sum_score[i], sum_score[i-1]+arr[i-1]);
        }
        

        if(i-2>=0){
            sum_score[i] = max(sum_score[i], sum_score[i-2]+arr[i-1]);
        }
    }

    cout << sum_score[n];
}

int main(){
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    dp(n);

    return 0;
}