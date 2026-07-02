//dq.push_front(10); // 앞에 넣기
//dq.push_back(20);   뒤에 넣기


#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << dq.front() << endl; 

    return 0;
}

// deque는 양쪽에서 삽입과 삭제가 가능함
// 중간에도 삽입과 삭제가 가능하지만 vector보다는 느림 
// 중간 원소에도 접근이 가능함
