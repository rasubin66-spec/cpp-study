#include <iostream>
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

    int answer = v[0];
    int current = v[0];

    for(int i = 1; i<n ; i++){
        current = max(v[i], current + v[i]); // 바로 이전위치에서 실행했던 연속합임 
        answer = max(answer, current); // 지금까지 있었던 합 중에서 가장 큰것
    }

    cout << answer;
}

// 아, 그러면 dp[i]를
//i번째에서 끝나는 최대 연속합으로 두면 되겠다.
//결국에는 연속되는 합과 현재 맨 마지막 값을 비교하면 되지 나머지 값들을 양쪽에서 더하면서 값이 똑같을 거니까 다를때를 기준으로 차별을 두면됨 