#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i= 0; i<=10; i++){
        sum += i;
    }

    cout << "0부터 10까지의 합:"<< sum << endl;

    return 0;
}