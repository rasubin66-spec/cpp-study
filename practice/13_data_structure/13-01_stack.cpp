//vector 는 동적 배열이지만.
// stack은 맨위의 꼭대기만 볼 수 있는 배열구조이다

//위에서 부터 쌓는 느낌이라 10 20 30 --> stack.pop() 하면 30 이 제거됨 

#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    st.push(20);

    cout << st.top() << endl; // top은 맨위에 있는 걸 출력하겠다는 소리이디ㅏ

    return 0;
}