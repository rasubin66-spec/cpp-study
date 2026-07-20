#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i<n ; i++){
        cin >> v[i];
    }

    int dp[n];

    for(int i =0; i<n ;i++){
        dp[i] = 1;
    }

    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<i; j++){
            if(v[j]>v[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    int max_length = 0;

    for(int i = 0; i<n ;i++){
        max_length = max(max_length, dp[i]);
    }

    cout << max_length;

    return 0;
}