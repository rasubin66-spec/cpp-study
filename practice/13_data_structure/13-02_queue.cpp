//queue FIFO

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;

    cout << q.size() << endl;

    return 0; // 
}

// 큐는 출구만 확인 가능한 구조임 
//q.front(); 맨앞 곧 나갈값을 의미함 
//q.back(); 맨뒤 마지막에 들어온 값을 의미함