#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    count = count + n/500;
    n=n%500;

    count = count + n/100;
    n=n%100;

    count = count + n/50;
    n=n%50;

    count = count + n/10;
    n=n%10;

    cout << count <<endl;
}

//그 문제 구조에서, 매 순간 가장 좋아 보이는 선택을 해도 전체 정답이 보장될 때 그리디로 풀 수 있다.