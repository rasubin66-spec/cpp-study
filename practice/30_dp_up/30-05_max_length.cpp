#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0 ; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int dp[1001];

    for(int i = 0;i<n ; i++){
        dp[i]=1;
    }

    int max_length = 0;
    
    for(int i = 0; i<n; i++){
        for(int j = 0 ; j<i ; j++){
            if(v[j]<v[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        
    }

    for(int i = 0; i<n ;i++){
        max_length= max(max_length, dp[i]);
    }

    cout << max_length;

    return 0;
}

// 이게 증가 수열에서는 어떤 숫자를 뒤에 붙일 수 있는지 판단할 때 마지막 숫자가 중요함 
// 그래서 뒤에것을 기준으로 각 앞의 항목들의 dp하고 비교를 해서 max함수를 써서 가장 큰 값만 저장해 버리면 그만임 
// 1. 붙이면 안 되는 dp[i-1]에 붙여서 너무 크게 나오거나
// 2. 붙일 수 있는 더 앞의 숫자 1을 못 보고 dp[i]가 너무 작게 나온다