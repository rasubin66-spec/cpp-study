#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dp[101];

int main(){
    int n;
    cin >> n;


    vector<int> v;

    for(int i = 0; i<n ;i++){
        int x;
        cin >> x ;
        v.push_back(x);
    }

    int max_length = 0;

    for(int i = 0; i<n ; i++){
        dp[i]= 1;
    }

    for(int i = 0; i<n ;i++){`
        for(int j = 0; j<i ;j++){
            if(dp[j]>dv[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    for(int i = 0 ; i<n ;i++){
        max_length = max(max_length,dp[i]);
    }

    cout << max_length;

    return 0;
}