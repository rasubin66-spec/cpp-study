#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}

//오엔 o(n) : 입력 크기 N에 비례해서 시간이 늘어난다.

//즉 cout << n ; 이면 한번 실행 이여서 O(1)
//for (int i = 0; i<n; i++) --> n번 반복 O(N)임
