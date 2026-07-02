#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    int n;

    cin >> n;

    for (int i = 0; i< n ; i++){
        int x ;
        cin >> x ;

        pq.push(x) ;  //push는 값을 반환하지 않는 함수라서 출력할 수 없다

        cout << x << " ";

        // 즉 cout는 값을 반환하는 것들만을 출력할수있다 그 값이 정수같은 것들이 아닌 문자라 하더라도 
    }

    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();


    }
    
    return 0;

}