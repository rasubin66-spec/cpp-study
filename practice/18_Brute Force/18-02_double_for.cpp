
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
        for (int j = i + 1; j < n; j++) {  // 같은 뭔소를 두번 쓰지 않기 위해서임 
            if (v[i] + v[j] == 10) {
                found = true;
            }
        }
    }

    if (found) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

//확실히 N이 크면 너무 위험함 
// 브루트포스는 가능한 후보를 전부 만들어서 검사하기에 숫자의 스케일이 커지면 너무 위험 