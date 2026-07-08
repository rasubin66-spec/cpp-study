#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (v[i] == 10) {
            found = true;
            break; // 여기서 찾으면 바로 멈춤 즉 예전 브루트 포스처럼 다보는게 아니라 해당하는 값을 찾으면 후보군을 다 보지 않고 멈쳐버림 
        }
    }

    if (found) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}