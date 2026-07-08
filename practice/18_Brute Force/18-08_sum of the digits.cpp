#include <iostream>
using namespace std;

int digitSum(int x) { //합을 돌려주는 함수를 표현 
    int sum = 0;

    while (x > 0) { // 어느 조건에 딱 멈쳐야하니까 while문을 씀 
        sum += x % 10; //123 %10 = 3
        x /= 10; //12 ---> 0될때까지 무한 반복함 
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (digitSum(i) == 10) {
            count++;
        }
    }

    cout << count;

    return 0;
}