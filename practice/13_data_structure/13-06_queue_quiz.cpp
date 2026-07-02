#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    int n;
    cin >> n;

    for(int i = 0 ; i < n; i++) {
        int x ; 
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){  // 왠만해서 큐의 반복 종료 조건은 거의 항상 while(!q.empty())이다 
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}

// q.empty() 는 큐가 비어있으면 true, 아니면 false를 반환함 
// 그래서 while(q.back() != q.empty()) 는 그래서 반환해주는 값이 다름 그래서 기본적으로 성립을 안함 