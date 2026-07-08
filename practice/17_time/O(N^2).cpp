#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0 ; i < n; i++){
        for (int j = 0; j<n; j++){
            cout << i << ' ' << j << endl;
        }
    }
}

//반복문 안에 반복문이 있고 둘 다 N번 돌면 O(N²)이다.
