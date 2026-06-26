#include <iostream>
using namespace std;

//예를 들어 매번 합계를 구하는 코드를 쓰기 귀찮으니까, add라는 함수로 만들 수 있어.
int add(int a, int b){
    return a + b ;
}

int main() {
    int result = add(10,20);

    cout << result << endl;

    return 0;

}