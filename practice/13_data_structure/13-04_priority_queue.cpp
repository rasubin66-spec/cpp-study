// 말 그대로 우선순위가 높은 데이터를 먼저처리하는 구조임 

#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(3);

    while (!pq.empty()) {
        cout << pq.top() << " "; // 가장 큰값을 우선순위로 지정하겟따는 소리이다.
        pq.pop();
    }

    return 0;
}